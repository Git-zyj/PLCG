/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226697
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
    var_19 = ((/* implicit */long long int) var_9);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 12; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) arr_4 [i_0] [i_1 + 1] [i_1 + 1])) <= (((/* implicit */int) arr_4 [i_0] [i_0] [i_1 + 1])))))));
                /* LoopSeq 2 */
                for (int i_2 = 0; i_2 < 13; i_2 += 4) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 3; i_3 < 11; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 13; i_4 += 4) 
                        {
                            {
                                arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_11 [i_0] [i_0] [i_0] [i_3] [i_0] [i_3 + 2] [i_4]);
                                arr_14 [i_0] [i_0] [i_2] [i_3] [i_0] = ((/* implicit */_Bool) (((~(((arr_5 [i_0] [i_0] [i_2] [i_3]) / (((/* implicit */unsigned long long int) var_5)))))) ^ (6917529027641081856ULL)));
                                var_21 += (+(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) ^ (562949953290240ULL))));
                                arr_15 [i_4] [i_0] [i_3 + 2] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_0] [i_0] [6LL] [i_0])) - (((/* implicit */int) arr_11 [i_4] [i_0] [i_0] [i_1 - 1] [i_0] [i_0] [i_0]))))) || (((/* implicit */_Bool) (+(arr_5 [i_0] [i_0] [i_2] [i_3 - 1]))))))) <= (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)29520)))))));
                            }
                        } 
                    } 
                    var_22 += ((/* implicit */long long int) arr_9 [i_0] [i_1 + 1] [i_0] [i_2]);
                }
                for (int i_5 = 0; i_5 < 13; i_5 += 4) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 13; i_6 += 3) 
                    {
                        for (unsigned long long int i_7 = 0; i_7 < 13; i_7 += 2) 
                        {
                            {
                                arr_25 [i_0] [i_1 + 1] [i_0] = ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) <= (1140046066U));
                                var_23 = ((/* implicit */unsigned long long int) (_Bool)0);
                                var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_1] [i_1]))) % (var_0))), (((/* implicit */unsigned long long int) (+(6075224840890572505LL)))))))));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)246))));
                    var_26 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_2 [i_0]))));
                }
                /* LoopNest 2 */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    for (unsigned int i_9 = 0; i_9 < 13; i_9 += 1) 
                    {
                        {
                            arr_30 [i_9] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (-(-6075224840890572506LL)))), ((+(arr_2 [i_0])))))) && (((/* implicit */_Bool) arr_22 [i_0] [i_0] [i_8] [i_8] [i_0] [i_0]))));
                            var_27 = ((/* implicit */_Bool) min((min((((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */long long int) 1628114467)) : (arr_26 [i_0] [i_0] [i_8] [i_0]))), (((/* implicit */long long int) arr_21 [i_0] [i_1] [i_8])))), (min((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-125)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_0] [i_0] [i_0] [i_0]))) : (1798247427U)))), (((((/* implicit */_Bool) var_18)) ? (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_1] [i_0]))) : (arr_26 [i_0] [i_0] [i_0] [i_0])))))));
                            var_28 = ((/* implicit */unsigned short) (_Bool)1);
                            var_29 = ((/* implicit */long long int) arr_29 [i_0] [i_1] [i_0] [i_0] [i_1 + 1] [i_9]);
                        }
                    } 
                } 
                var_30 = ((/* implicit */signed char) max((((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (unsigned short)49152)))), (((((/* implicit */int) arr_19 [i_1 - 1] [i_0])) >> (((511U) - (480U)))))));
            }
        } 
    } 
    var_31 = ((/* implicit */long long int) (+(var_13)));
    var_32 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) (_Bool)1)), ((short)-4476))))) & (((min((-4744841035093142400LL), (((/* implicit */long long int) -64632481)))) ^ (((/* implicit */long long int) max((var_12), (((/* implicit */unsigned int) (signed char)-124)))))))));
}
