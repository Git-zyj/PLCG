/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228507
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
    var_10 *= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_7)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 262142)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_9))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_2)))));
    var_11 = max((((/* implicit */int) var_8)), (max((((/* implicit */int) (_Bool)1)), ((~(((/* implicit */int) var_5)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */_Bool) (+(262142)));
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 1) 
                {
                    var_13 ^= ((arr_1 [i_0]) > (((/* implicit */unsigned int) 262142)));
                    var_14 &= ((/* implicit */unsigned long long int) var_1);
                    arr_6 [i_1] [i_1] [i_2] [18] = ((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_6))))) - (((unsigned long long int) 274877906928ULL)));
                }
                for (unsigned int i_3 = 0; i_3 < 22; i_3 += 3) 
                {
                    var_15 &= ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (arr_0 [i_0])))))) ? (((unsigned long long int) (-(16706055806118545746ULL)))) : (((/* implicit */unsigned long long int) ((arr_1 [i_0]) * (((/* implicit */unsigned int) ((((/* implicit */int) var_0)) / (-1292873654))))))));
                    var_16 &= ((/* implicit */unsigned int) (-(arr_8 [i_1] [i_1] [i_1])));
                    /* LoopSeq 1 */
                    for (int i_4 = 2; i_4 < 18; i_4 += 3) 
                    {
                        var_17 &= ((/* implicit */signed char) var_7);
                        /* LoopSeq 2 */
                        for (unsigned long long int i_5 = 1; i_5 < 18; i_5 += 4) 
                        {
                            var_18 ^= ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) arr_8 [i_5 + 4] [i_5 + 3] [i_3])))))));
                            var_19 &= ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_5 [9] [i_4 + 4] [i_4] [i_4])), (16706055806118545746ULL)));
                            arr_16 [13U] [i_1] [i_3] [i_4] [2] [i_1] [i_1] = ((/* implicit */unsigned long long int) arr_2 [i_1]);
                        }
                        /* vectorizable */
                        for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 3) 
                        {
                            var_20 = ((/* implicit */_Bool) (((_Bool)1) ? (16706055806118545746ULL) : (((/* implicit */unsigned long long int) 4294967295U))));
                            var_21 -= ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1740688267591005870ULL)) ? (17193932226572274262ULL) : (((/* implicit */unsigned long long int) 350192827))))) ? (((arr_8 [i_0] [i_1] [i_1]) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0] [i_1] [20U] [i_4] [i_4 + 2] [(signed char)16]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [(_Bool)0] [14U] [4ULL] [i_4 + 3] [10U]))));
                        }
                        arr_21 [i_1] = ((/* implicit */signed char) ((unsigned int) ((min((((/* implicit */unsigned long long int) arr_17 [i_0] [i_1] [i_1] [i_4 + 1] [4U])), (16706055806118545746ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_9)))))));
                    }
                }
                for (unsigned long long int i_7 = 4; i_7 < 21; i_7 += 1) 
                {
                    var_22 = ((/* implicit */unsigned int) var_8);
                    /* LoopNest 2 */
                    for (signed char i_8 = 3; i_8 < 21; i_8 += 4) 
                    {
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-86)) + (2147483647))) << (((((((/* implicit */int) max(((signed char)102), ((signed char)65)))) % (((int) -262143)))) - (102)))));
                                var_24 = ((/* implicit */unsigned long long int) ((1339897834U) > (4142353429U)));
                            }
                        } 
                    } 
                }
                arr_29 [2ULL] [i_1] [i_1] = ((/* implicit */int) arr_20 [i_1] [i_0] [i_1]);
            }
        } 
    } 
    var_25 = (+(max((((/* implicit */unsigned int) -816299676)), (7U))));
    var_26 = ((/* implicit */signed char) 152613867U);
}
