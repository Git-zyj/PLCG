/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42163
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
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned short i_2 = 0; i_2 < 16; i_2 += 2) /* same iter space */
                {
                    var_13 = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_6 [i_0] [i_0] [i_1] [i_1])) | (((/* implicit */int) arr_6 [i_0] [i_0] [i_1] [i_1])))) > (var_0)));
                    var_14 *= ((/* implicit */unsigned int) max((((/* implicit */int) arr_6 [i_1] [i_1 + 3] [i_1] [i_0])), (((((/* implicit */int) arr_6 [i_1 + 3] [i_1 + 3] [i_1 + 3] [i_2])) - (((/* implicit */int) arr_6 [i_1] [i_1 + 1] [i_1] [i_2]))))));
                }
                for (unsigned short i_3 = 0; i_3 < 16; i_3 += 2) /* same iter space */
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_4 = 0; i_4 < 16; i_4 += 1) 
                    {
                        var_15 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) ^ (var_3)));
                        arr_13 [i_0] [i_3] &= ((/* implicit */int) ((signed char) -712300918));
                        var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (unsigned char)171)))) || (((/* implicit */_Bool) (+(var_1)))))))));
                    }
                    var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) max((((/* implicit */int) arr_0 [i_0])), (max((712300918), (((/* implicit */int) var_8)))))))));
                }
                var_18 = ((/* implicit */int) ((((_Bool) 949508305U)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_10 [i_1] [i_1 - 1] [i_1] [i_1] [i_1] [i_1]) >= (((/* implicit */int) var_2)))))) : (arr_5 [i_1])));
                /* LoopNest 2 */
                for (long long int i_5 = 0; i_5 < 16; i_5 += 3) 
                {
                    for (long long int i_6 = 0; i_6 < 16; i_6 += 3) 
                    {
                        {
                            arr_19 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)1))))) ? (((((/* implicit */int) (unsigned short)54199)) | (((/* implicit */int) (_Bool)1)))) : (max((1257089993), (((/* implicit */int) arr_17 [i_1 + 3] [i_1] [i_1 - 1] [i_1] [i_1] [i_1 + 2]))))));
                            var_19 += ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((-712300918) - (((/* implicit */int) var_4))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_2))) - (var_1))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)246)) ? (((/* implicit */int) (unsigned char)27)) : (((/* implicit */int) (_Bool)1))))))) >= (((/* implicit */unsigned int) ((/* implicit */int) ((arr_8 [i_1 + 1]) <= (((/* implicit */int) var_12))))))));
                            var_20 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_9 [i_1])) ? (((/* implicit */long long int) arr_9 [i_1])) : (var_9))) >= (((/* implicit */long long int) ((3345458966U) * (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_0] [i_1] [i_1] [i_5] [i_6] [i_6]))))))));
                            var_21 |= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_6 [i_0] [i_1] [i_5] [i_0]))))) && (((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)63)) << (((/* implicit */int) arr_18 [i_1] [i_5] [i_6]))))), (var_1))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 &= ((/* implicit */signed char) ((((/* implicit */_Bool) (((!(var_11))) ? (min((((/* implicit */int) var_12)), (1025372839))) : (((/* implicit */int) ((((/* implicit */long long int) -1025372840)) <= (var_9))))))) ? ((~(((3319994972187064482LL) / (((/* implicit */long long int) -1025372832)))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_2)))))));
    var_23 = ((/* implicit */unsigned int) max((var_11), (var_11)));
}
