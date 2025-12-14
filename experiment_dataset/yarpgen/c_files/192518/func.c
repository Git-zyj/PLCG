/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192518
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
    var_19 = var_7;
    var_20 = ((/* implicit */signed char) ((((((/* implicit */_Bool) 24ULL)) && ((_Bool)1))) && (((/* implicit */_Bool) var_13))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 3) /* same iter space */
    {
        arr_4 [i_0] &= ((/* implicit */long long int) (unsigned short)65535);
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) 18446744073709551605ULL))));
            arr_7 [i_1] [(_Bool)1] [17LL] = ((/* implicit */signed char) ((((((/* implicit */int) var_10)) << (((18446744073709551569ULL) - (18446744073709551555ULL))))) == (var_7)));
            arr_8 [0ULL] [0ULL] = ((/* implicit */long long int) (~(((/* implicit */int) (signed char)-56))));
            arr_9 [i_1] [i_1] [19ULL] = ((/* implicit */signed char) (!(((/* implicit */_Bool) 67108863LL))));
        }
    }
    for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 3) /* same iter space */
    {
        arr_12 [i_2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((67108864LL) | (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) >> (((-67108863LL) + (67108871LL)))))))))));
        var_22 = ((/* implicit */long long int) ((((/* implicit */int) var_15)) & (((/* implicit */int) (unsigned short)26218))));
        /* LoopNest 2 */
        for (signed char i_3 = 2; i_3 < 20; i_3 += 1) 
        {
            for (unsigned char i_4 = 0; i_4 < 23; i_4 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 2) 
                    {
                        var_23 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_14))))) != ((~(var_16)))));
                        var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) (+(((((int) var_16)) % ((-(((/* implicit */int) (unsigned short)7)))))))))));
                    }
                    for (unsigned char i_6 = 0; i_6 < 23; i_6 += 1) 
                    {
                        arr_24 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) & (13063140388410395121ULL)));
                        var_25 = ((/* implicit */unsigned short) min((var_25), (var_10)));
                    }
                    var_26 = ((/* implicit */signed char) ((unsigned short) (~(((((/* implicit */_Bool) -67108864LL)) ? (((/* implicit */unsigned long long int) var_7)) : (var_16))))));
                }
            } 
        } 
    }
    var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_17)) ? (var_18) : (((/* implicit */int) ((((/* implicit */int) ((unsigned short) var_8))) < ((+(((/* implicit */int) var_12)))))))));
}
