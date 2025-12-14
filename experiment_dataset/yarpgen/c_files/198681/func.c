/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198681
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
    var_15 = ((/* implicit */int) (((-(min((((/* implicit */unsigned long long int) -1602974395150653279LL)), (var_4))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)-118)) < (((/* implicit */int) (signed char)-8))))))));
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 22; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_10)), (var_3)))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_0] [i_0])) >> (((/* implicit */int) var_8))))) : (((5136996440096768505LL) | (((/* implicit */long long int) ((/* implicit */int) (unsigned short)9))))))) != (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))))))));
                /* LoopNest 2 */
                for (signed char i_2 = 1; i_2 < 23; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned short)722)), (arr_4 [i_2] [i_2 + 1] [(_Bool)1] [i_2])))) ? (((((/* implicit */_Bool) arr_7 [i_2] [i_2 + 1] [i_2])) ? (((/* implicit */int) arr_7 [i_2] [i_2 + 1] [i_2])) : (var_14))) : (((/* implicit */int) ((short) var_5)))));
                            /* LoopSeq 2 */
                            for (unsigned long long int i_4 = 1; i_4 < 23; i_4 += 1) 
                            {
                                var_18 = ((/* implicit */int) ((((arr_4 [i_0] [19U] [i_0 - 2] [i_0 - 2]) >> (((arr_4 [i_0] [i_0] [i_0 - 3] [i_0]) - (7288283368394977992LL))))) | (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)0)))))));
                                var_19 = ((/* implicit */unsigned long long int) var_6);
                            }
                            for (int i_5 = 1; i_5 < 22; i_5 += 3) 
                            {
                                var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_0 + 3])) ? ((+(((/* implicit */int) var_1)))) : ((~(((/* implicit */int) arr_12 [i_0] [i_0 - 3]))))));
                                arr_13 [i_3] [i_1] [i_3] [15U] [i_5] [9U] = ((/* implicit */unsigned short) max((3023730249373843094ULL), (((/* implicit */unsigned long long int) (+(var_6))))));
                                var_21 = ((max((max((((/* implicit */unsigned long long int) var_7)), (var_13))), (((/* implicit */unsigned long long int) ((var_3) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)24603)))))))) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0]))));
                                var_22 = 15423013824335708520ULL;
                            }
                            var_23 = ((/* implicit */unsigned short) min((((((((/* implicit */int) var_12)) + (2147483647))) >> (((max((((/* implicit */int) (unsigned short)40937)), (var_14))) - (899428287))))), (((/* implicit */int) min(((unsigned short)20363), ((unsigned short)21171))))));
                        }
                    } 
                } 
                arr_14 [i_0] = ((/* implicit */int) min((((/* implicit */unsigned long long int) (+(var_6)))), ((-(min((15423013824335708491ULL), (((/* implicit */unsigned long long int) arr_12 [i_1] [i_0]))))))));
            }
        } 
    } 
}
