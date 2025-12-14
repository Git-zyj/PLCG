/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34309
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_13 = ((/* implicit */unsigned char) ((_Bool) min((18446744073709551615ULL), (((/* implicit */unsigned long long int) (_Bool)1)))));
                        arr_10 [i_1] = ((long long int) ((((/* implicit */_Bool) 13938365367503978410ULL)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (_Bool)1))));
                        var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) var_6)), (var_2)))), (min((13938365367503978428ULL), (13938365367503978428ULL))))))));
                        var_15 = ((_Bool) ((long long int) ((_Bool) 13938365367503978410ULL)));
                    }
                    arr_11 [i_1] = max((4ULL), (((/* implicit */unsigned long long int) ((_Bool) var_3))));
                }
            } 
        } 
    } 
    var_16 = ((_Bool) (unsigned char)241);
    var_17 = ((/* implicit */unsigned char) 4508378706205573187ULL);
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_5 = 1; i_5 < 13; i_5 += 2) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (long long int i_7 = 0; i_7 < 16; i_7 += 2) 
                {
                    {
                        var_18 = ((((/* implicit */_Bool) 13938365367503978395ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (4508378706205573193ULL));
                        /* LoopSeq 1 */
                        for (unsigned char i_8 = 0; i_8 < 16; i_8 += 3) 
                        {
                            arr_24 [i_6] [i_5 + 1] [i_7] [i_7] [i_6] = ((/* implicit */long long int) 13938365367503978421ULL);
                            arr_25 [i_4] [i_4] [i_6] [i_7] [2ULL] |= ((/* implicit */_Bool) 14769929744458444659ULL);
                            var_19 = ((unsigned long long int) -7450282568742411691LL);
                        }
                        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) var_1)) ? (13938365367503978428ULL) : (11392461411244623154ULL)))))));
                    }
                } 
            } 
        } 
        arr_26 [i_4] = ((/* implicit */long long int) ((_Bool) (_Bool)1));
        arr_27 [i_4] = ((/* implicit */unsigned long long int) var_11);
    }
}
