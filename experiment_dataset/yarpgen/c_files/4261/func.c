/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4261
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4261 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4261
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
    for (short i_0 = 0; i_0 < 19; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) var_15);
        arr_3 [i_0] = ((/* implicit */unsigned long long int) (_Bool)1);
        var_17 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9645304314897561675ULL)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_0 [i_0]))))) ? (((arr_0 [i_0]) ? (3LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)3225))))) : (((/* implicit */long long int) ((var_4) ? ((~(((/* implicit */int) arr_0 [i_0])))) : (((var_16) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_11)))))))));
    }
    for (short i_1 = 0; i_1 < 19; i_1 += 3) /* same iter space */
    {
        arr_7 [i_1] = ((/* implicit */unsigned int) arr_0 [i_1]);
        var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_15)) && (((/* implicit */_Bool) var_11)))) ? (((((/* implicit */_Bool) 6630748807846221889ULL)) ? (8801439758811989944ULL) : (((/* implicit */unsigned long long int) 10LL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_1 [i_1] [i_1])), (arr_4 [i_1])))))))) && (((/* implicit */_Bool) arr_4 [i_1]))));
    }
    for (short i_2 = 0; i_2 < 19; i_2 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 19; i_3 += 3) 
        {
            for (unsigned int i_4 = 0; i_4 < 19; i_4 += 1) 
            {
                {
                    var_19 = ((/* implicit */unsigned short) (((((-(min((((/* implicit */int) var_6)), (76130032))))) + (2147483647))) >> (((((/* implicit */int) var_9)) - (39)))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (signed char i_6 = 0; i_6 < 19; i_6 += 4) 
                        {
                            var_20 = ((/* implicit */signed char) arr_5 [i_2] [i_2]);
                            var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((17499350652809703376ULL), (((/* implicit */unsigned long long int) arr_22 [i_2] [i_3] [i_4] [i_2] [i_6] [i_6] [i_3]))))) ? ((-(17726268060891436633ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))) ? (((/* implicit */int) (unsigned char)252)) : (((/* implicit */int) ((((/* implicit */int) (signed char)-44)) != (((/* implicit */int) (unsigned char)128)))))));
                        }
                        var_22 = ((/* implicit */int) ((_Bool) (_Bool)1));
                    }
                }
            } 
        } 
        arr_24 [i_2] = ((/* implicit */signed char) (unsigned char)210);
    }
    var_23 = ((/* implicit */_Bool) min((((unsigned long long int) (-(((/* implicit */int) (short)22945))))), (((/* implicit */unsigned long long int) ((var_3) ? (((((/* implicit */_Bool) (unsigned short)65535)) ? (-76130022) : (76130039))) : (((/* implicit */int) var_12)))))));
    var_24 = ((/* implicit */long long int) max((((((/* implicit */_Bool) max((var_14), (((/* implicit */unsigned long long int) (_Bool)1))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_4)), (var_12)))) : (((/* implicit */int) var_9)))), (max((var_5), (max((((/* implicit */int) var_16)), (0)))))));
}
