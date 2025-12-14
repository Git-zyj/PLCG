/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20123
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
    var_16 = ((/* implicit */unsigned long long int) ((short) (short)8184));
    var_17 &= ((((/* implicit */int) (unsigned char)252)) <= ((-((-(((/* implicit */int) var_4)))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 15; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    var_18 |= (+(((/* implicit */int) ((((((/* implicit */_Bool) 0ULL)) ? (var_13) : (((/* implicit */int) var_7)))) > (((((/* implicit */_Bool) arr_3 [i_0] [i_2])) ? (((/* implicit */int) var_9)) : (-764523854)))))));
                    arr_7 [i_0] [i_1] = ((/* implicit */short) var_0);
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 1; i_3 < 13; i_3 += 2) 
                    {
                        var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((int) -764523837))), (18446744073709551615ULL)))) ? (((/* implicit */int) (short)11956)) : (((/* implicit */int) (signed char)-122))));
                        var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((long long int) (!(((/* implicit */_Bool) 764523854))))))));
                        var_21 += ((/* implicit */signed char) var_13);
                        var_22 = ((_Bool) arr_9 [i_3 + 1] [i_3] [i_3]);
                        var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_1] [14U] [i_2] [i_3])) ? (((/* implicit */int) arr_1 [(unsigned short)5])) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)65535)))) : (-764523854)))));
                    }
                    /* vectorizable */
                    for (unsigned short i_4 = 0; i_4 < 16; i_4 += 2) 
                    {
                        arr_12 [(_Bool)1] [i_1] [(_Bool)1] [(_Bool)1] = (!(((/* implicit */_Bool) 4194296)));
                        var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) (unsigned char)114))));
                    }
                }
            } 
        } 
    } 
}
