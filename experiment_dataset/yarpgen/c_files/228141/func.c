/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228141
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
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 3; i_0 < 11; i_0 += 3) 
    {
        var_16 -= ((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)-10)) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (125126909) : (((/* implicit */int) (unsigned short)12129)))) : ((-(((/* implicit */int) (unsigned short)12146)))))) - (((/* implicit */int) var_6))));
        var_17 = ((/* implicit */unsigned int) ((((var_14) - (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-4096))) > (var_11)))))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 1; i_1 < 15; i_1 += 4) 
    {
        var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) 2789907462728918887LL)) ? (((var_9) % (((/* implicit */int) (signed char)-61)))) : (((/* implicit */int) (signed char)60))));
        /* LoopNest 2 */
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            for (short i_3 = 2; i_3 < 13; i_3 += 2) 
            {
                {
                    var_19 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_4 [i_1 - 1]))));
                    /* LoopNest 2 */
                    for (signed char i_4 = 0; i_4 < 16; i_4 += 3) 
                    {
                        for (long long int i_5 = 2; i_5 < 14; i_5 += 4) 
                        {
                            {
                                arr_15 [i_5] &= ((/* implicit */unsigned long long int) (((_Bool)1) ? (2789907462728918887LL) : (((/* implicit */long long int) 4294967294U))));
                                var_20 = ((((/* implicit */_Bool) arr_9 [i_2] [i_2 - 1] [i_2 - 1])) && (((/* implicit */_Bool) (signed char)60)));
                                var_21 = var_0;
                            }
                        } 
                    } 
                }
            } 
        } 
        var_22 = var_5;
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        arr_18 [(signed char)17] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (max((((/* implicit */unsigned long long int) var_8)), (var_13))) : (((unsigned long long int) -1760450557))));
        var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) 4294967281U)) || (((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)-61)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-84))) : (4294967250U))) >> (((((/* implicit */int) (signed char)-61)) + (71))))))));
    }
    var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(var_11)))) ? (((/* implicit */int) max((var_0), (var_6)))) : (((/* implicit */int) var_5))));
    /* LoopNest 3 */
    for (long long int i_7 = 0; i_7 < 14; i_7 += 2) 
    {
        for (unsigned long long int i_8 = 0; i_8 < 14; i_8 += 3) 
        {
            for (unsigned short i_9 = 1; i_9 < 12; i_9 += 1) 
            {
                {
                    arr_27 [8LL] [i_8] [(_Bool)1] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 14U)) ? ((+(((var_9) & (((/* implicit */int) (unsigned short)12123)))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)4))) <= (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) : (var_11))))))));
                    /* LoopNest 2 */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        for (unsigned int i_11 = 0; i_11 < 14; i_11 += 4) 
                        {
                            {
                                var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -490703837626465128LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (14U)));
                                var_26 = ((/* implicit */unsigned short) ((unsigned long long int) var_8));
                                var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) -525799488))) ^ (((/* implicit */int) ((((/* implicit */int) (signed char)96)) <= (((/* implicit */int) (unsigned short)65535)))))));
                                var_28 = ((/* implicit */unsigned int) min((var_28), (var_15)));
                            }
                        } 
                    } 
                    var_29 = ((/* implicit */short) ((_Bool) var_14));
                }
            } 
        } 
    } 
}
