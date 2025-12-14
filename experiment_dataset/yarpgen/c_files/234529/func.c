/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234529
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234529 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234529
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_1] [(short)5] = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) var_5)) ? (arr_1 [i_0]) : (886319700))));
                /* LoopSeq 2 */
                for (unsigned int i_2 = 0; i_2 < 10; i_2 += 4) /* same iter space */
                {
                    arr_9 [i_2] [i_0] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)5978)))))) | (((((/* implicit */_Bool) (+(((/* implicit */int) var_0))))) ? (var_14) : (((/* implicit */long long int) (-(((/* implicit */int) var_8)))))))));
                    /* LoopNest 2 */
                    for (short i_3 = 1; i_3 < 9; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_19 = (!(((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)19256))))), (((((/* implicit */int) arr_13 [i_3] [i_3] [i_3] [i_3] [i_3] [(unsigned short)5])) % (((/* implicit */int) arr_7 [i_0] [i_0] [i_0]))))))));
                                var_20 = ((/* implicit */unsigned char) ((((long long int) (short)-27221)) + (((/* implicit */long long int) ((/* implicit */int) (signed char)-76)))));
                            }
                        } 
                    } 
                }
                for (unsigned int i_5 = 0; i_5 < 10; i_5 += 4) /* same iter space */
                {
                    arr_17 [i_0] = ((/* implicit */signed char) min((((/* implicit */int) ((unsigned short) 4101020251U))), ((+((+(var_17)))))));
                    /* LoopSeq 1 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        var_21 -= ((/* implicit */unsigned long long int) ((var_1) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_18)), (22ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_0]))) : (((var_0) ? (arr_19 [i_1] [i_1] [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_0] [i_1] [i_5]))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) max((193947044U), (((/* implicit */unsigned int) (unsigned char)225))))) ? (((((/* implicit */int) var_12)) ^ (var_10))) : (((/* implicit */int) var_7)))))));
                        var_22 = ((/* implicit */long long int) (~(((/* implicit */int) arr_11 [i_6] [i_5]))));
                    }
                    var_23 -= ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_16 [i_0] [i_1])) ? (arr_16 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)181))))), (min((arr_16 [i_0] [i_5]), (arr_16 [i_1] [i_5])))));
                    var_24 = ((/* implicit */int) ((min((arr_8 [i_0] [i_1] [i_5] [i_5]), (((/* implicit */long long int) arr_0 [(short)5] [i_5])))) % (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])))));
                }
                arr_20 [i_1] = (unsigned char)128;
            }
        } 
    } 
    var_25 &= ((/* implicit */unsigned short) min((3U), (((/* implicit */unsigned int) var_12))));
    var_26 = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((int) (~(((/* implicit */int) var_8)))))), (max((((/* implicit */long long int) (unsigned short)65533)), (min((var_14), (((/* implicit */long long int) -581896301))))))));
}
