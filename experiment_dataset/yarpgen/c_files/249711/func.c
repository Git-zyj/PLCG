/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249711
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
    var_20 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (((_Bool)0) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)32256)) > (((/* implicit */int) var_0)))))))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            var_21 *= ((/* implicit */signed char) arr_3 [(unsigned char)0]);
            arr_4 [i_1] [i_0] [i_1] = ((/* implicit */signed char) (+(((/* implicit */int) arr_1 [i_0] [i_1]))));
            arr_5 [i_1] = ((/* implicit */short) ((((((/* implicit */int) arr_3 [i_1])) != (((/* implicit */int) arr_0 [i_0])))) ? (((/* implicit */int) arr_0 [i_0])) : (((((/* implicit */int) arr_2 [i_0])) << (((/* implicit */int) arr_2 [i_0]))))));
        }
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
        {
            for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
            {
                {
                    var_22 = ((/* implicit */short) (-(((long long int) arr_10 [i_2 + 1] [i_3 - 1]))));
                    arr_11 [i_0] [i_2] [i_3] = ((/* implicit */unsigned char) max((((/* implicit */int) arr_1 [i_0] [i_2])), ((-(((/* implicit */int) ((((/* implicit */_Bool) (short)-5361)) && (((/* implicit */_Bool) (unsigned short)32256)))))))));
                    /* LoopSeq 3 */
                    for (unsigned int i_4 = 0; i_4 < 13; i_4 += 3) 
                    {
                        arr_14 [i_4] [i_3] [i_4] = ((/* implicit */short) var_0);
                        var_23 += ((/* implicit */signed char) var_8);
                        var_24 ^= ((((/* implicit */long long int) min((arr_9 [i_3 - 1] [i_3]), (arr_9 [i_3 - 1] [i_3])))) ^ (min((((/* implicit */long long int) arr_9 [i_3 - 1] [i_3])), (-1159322156008781778LL))));
                        arr_15 [i_4] = ((long long int) ((signed char) arr_8 [i_2 + 1]));
                    }
                    for (signed char i_5 = 3; i_5 < 12; i_5 += 1) 
                    {
                        var_25 = ((/* implicit */unsigned int) ((unsigned char) ((short) arr_3 [i_5])));
                        var_26 ^= (unsigned char)224;
                    }
                    for (unsigned char i_6 = 0; i_6 < 13; i_6 += 3) 
                    {
                        arr_21 [i_0] [i_2 + 1] [i_2] [i_3] [i_6] = ((/* implicit */unsigned char) arr_0 [(unsigned char)4]);
                        var_27 ^= min((((short) ((unsigned int) var_9))), (((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */long long int) (_Bool)0)), (arr_6 [i_3])))) || (((/* implicit */_Bool) max((((/* implicit */long long int) (short)-1)), (arr_6 [i_3]))))))));
                        var_28 = ((/* implicit */long long int) min((1446503859U), (((/* implicit */unsigned int) arr_0 [i_2 + 1]))));
                    }
                }
            } 
        } 
    }
    for (unsigned int i_7 = 0; i_7 < 25; i_7 += 3) 
    {
        var_29 = ((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))));
        var_30 *= ((/* implicit */_Bool) ((((/* implicit */long long int) ((arr_22 [(_Bool)1] [i_7]) ? ((((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)87)))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_23 [i_7])) && ((_Bool)1))))))) + (((min((((/* implicit */long long int) arr_22 [i_7] [i_7])), (arr_23 [i_7]))) ^ (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)0)))))))));
    }
    for (unsigned int i_8 = 0; i_8 < 18; i_8 += 3) 
    {
        arr_28 [i_8] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) arr_22 [i_8] [i_8])), ((-(137608253U)))));
        var_31 = ((/* implicit */unsigned int) (+((+(((/* implicit */int) ((short) arr_26 [i_8] [i_8])))))));
    }
}
