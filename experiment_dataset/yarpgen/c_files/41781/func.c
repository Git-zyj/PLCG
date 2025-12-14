/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41781
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
    var_10 = ((/* implicit */long long int) min((var_10), (((((/* implicit */long long int) ((/* implicit */int) ((signed char) ((((/* implicit */int) var_6)) >= (((/* implicit */int) var_7))))))) + (((((/* implicit */_Bool) ((unsigned int) var_4))) ? (var_5) : (((((/* implicit */_Bool) var_1)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        var_11 = ((/* implicit */short) ((((((/* implicit */_Bool) ((int) arr_2 [i_0]))) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)10055))) > (8445973248886469891ULL)))))) << (((((/* implicit */int) arr_2 [i_0])) << (((((/* implicit */int) arr_0 [i_0])) - (2038)))))));
        var_12 = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_3 [i_0] [i_0])))) * (var_2)))) != (var_5)));
    }
    var_13 = ((/* implicit */_Bool) var_2);
    /* LoopNest 2 */
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        for (int i_2 = 0; i_2 < 21; i_2 += 4) 
        {
            {
                var_14 |= ((/* implicit */unsigned long long int) ((((((/* implicit */int) var_1)) << (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))) >> (((((((/* implicit */_Bool) arr_9 [i_2] [i_2])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_1)))) - (75)))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_3 = 0; i_3 < 21; i_3 += 1) 
                {
                    var_15 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) > (((/* implicit */int) var_3))));
                    /* LoopNest 2 */
                    for (signed char i_4 = 0; i_4 < 21; i_4 += 1) 
                    {
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned long long int) ((unsigned int) var_1));
                                var_17 = ((/* implicit */short) (unsigned char)255);
                                arr_16 [i_1] [i_3] [i_3] [i_5] |= ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-78)) && (((/* implicit */_Bool) (unsigned char)0))));
                                var_18 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_13 [i_1 - 1])) == (((/* implicit */int) (unsigned char)15))));
                            }
                        } 
                    } 
                    var_19 |= ((/* implicit */unsigned char) ((((/* implicit */int) var_1)) < (((/* implicit */int) (short)-26318))));
                    var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((((/* implicit */int) arr_5 [i_1 - 1])) != (((/* implicit */int) arr_5 [i_1 - 1])))))));
                    var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) var_8))));
                }
            }
        } 
    } 
}
