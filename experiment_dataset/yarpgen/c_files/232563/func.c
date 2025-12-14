/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232563
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
    var_10 = ((/* implicit */int) min((((((/* implicit */long long int) 3811367248U)) / (2852011478344870169LL))), (((/* implicit */long long int) ((_Bool) 3008447410253734606LL)))));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 10; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */unsigned char) min((var_11), (((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) ((unsigned long long int) arr_3 [i_0] [(unsigned char)7]))) ? (var_9) : (((/* implicit */long long int) min((((/* implicit */int) (short)-26650)), (var_7))))))))));
                /* LoopNest 2 */
                for (short i_2 = 1; i_2 < 11; i_2 += 3) 
                {
                    for (long long int i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                            {
                                var_12 += ((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) (short)26661)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-26650)))));
                                var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) var_3))));
                                arr_14 [i_1] [i_1 + 3] [(_Bool)1] [i_1] [i_1] [i_1] [5LL] = ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) min(((short)15868), ((short)-26650)))))))));
                                arr_15 [(signed char)1] [i_3] [i_1] [(signed char)1] [i_1] [i_0] [(signed char)1] = ((/* implicit */unsigned short) (+(((/* implicit */int) (_Bool)1))));
                            }
                            var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) (+(min((min((var_0), (((/* implicit */unsigned long long int) (signed char)-32)))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (_Bool)1)), (var_9)))))))))));
                            arr_16 [i_0 + 3] [(_Bool)1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((int) (signed char)-122)) != (((/* implicit */int) (_Bool)1))));
                        }
                    } 
                } 
                var_15 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned char)134))));
            }
        } 
    } 
}
