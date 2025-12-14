/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210002
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
    var_15 = ((/* implicit */unsigned int) ((((((/* implicit */int) ((unsigned short) var_5))) ^ (((/* implicit */int) var_13)))) != (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) var_11))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_16 = ((/* implicit */unsigned int) (~(((long long int) arr_1 [i_0] [i_0]))));
        var_17 = ((/* implicit */signed char) (-(((/* implicit */int) ((arr_1 [i_0] [i_0]) || (arr_1 [i_0] [i_0]))))));
        var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((var_2), (arr_0 [i_0] [i_0])))) ? (((((/* implicit */int) arr_1 [i_0] [i_0])) + (((/* implicit */int) arr_0 [i_0] [i_0])))) : (((/* implicit */int) max((arr_0 [i_0] [i_0]), (((/* implicit */unsigned char) arr_1 [i_0] [i_0])))))));
        /* LoopNest 3 */
        for (unsigned int i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            for (unsigned short i_2 = 1; i_2 < 18; i_2 += 2) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 2) 
                {
                    {
                        var_19 += ((/* implicit */unsigned long long int) ((signed char) ((unsigned char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned short)60041))))));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            var_20 ^= ((/* implicit */unsigned long long int) (-((+(min((((/* implicit */int) (unsigned char)8)), (arr_6 [i_0] [i_1] [i_1] [i_3])))))));
                            arr_12 [i_0] [i_1] [i_2 + 2] [i_1] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) ((signed char) -458942397))) * ((+(((/* implicit */int) (_Bool)1))))))) ? (((((((/* implicit */_Bool) (unsigned short)46353)) ? (((/* implicit */int) (signed char)-19)) : (((/* implicit */int) (unsigned short)19182)))) + (((/* implicit */int) arr_1 [i_1 - 1] [i_3])))) : (((((/* implicit */int) var_8)) * (((((/* implicit */int) (signed char)18)) * (((/* implicit */int) (_Bool)0))))))));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_5 = 1; i_5 < 18; i_5 += 4) /* same iter space */
                        {
                            var_21 += ((/* implicit */int) ((unsigned short) arr_4 [i_0] [i_3] [i_2 + 2]));
                            var_22 += ((/* implicit */unsigned short) ((long long int) ((((/* implicit */int) var_3)) == (arr_6 [i_0] [i_1 - 1] [i_5 - 1] [i_3]))));
                            var_23 = ((/* implicit */int) (!(((_Bool) (unsigned char)0))));
                            var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(arr_6 [i_1] [i_1] [i_3] [i_5])))) ? (((((/* implicit */_Bool) arr_7 [i_1 + 1] [i_1] [i_5 + 1])) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) arr_1 [i_0] [i_0])))) : (((/* implicit */int) (signed char)68))));
                            var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) (~(((/* implicit */int) arr_2 [i_2 - 1] [i_0] [i_3])))))));
                        }
                        for (unsigned long long int i_6 = 1; i_6 < 18; i_6 += 4) /* same iter space */
                        {
                            arr_18 [i_6] [i_1] [i_2] [i_1] [i_0] = ((/* implicit */signed char) (~((-(((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_1 + 1] [i_2] [i_3] [i_6])))))))));
                            arr_19 [i_1] [i_1] = ((/* implicit */short) (~(((/* implicit */int) (unsigned char)255))));
                            arr_20 [i_0] [i_1 + 1] [i_2] [i_1] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)19183)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(742201910)))) ? (((/* implicit */int) arr_10 [i_0] [i_1 - 1] [i_2] [i_1] [i_6] [i_1 + 1])) : (((/* implicit */int) ((signed char) var_7))))))));
                        }
                    }
                } 
            } 
        } 
    }
    var_26 &= ((/* implicit */unsigned char) max((((((((/* implicit */int) var_2)) ^ (((/* implicit */int) var_6)))) | (((((/* implicit */int) var_9)) ^ (var_4))))), (((((/* implicit */int) (unsigned short)46353)) >> (((/* implicit */int) (signed char)18))))));
    var_27 = ((/* implicit */long long int) max((min((((/* implicit */int) var_6)), ((~(((/* implicit */int) (signed char)89)))))), (((/* implicit */int) var_7))));
}
