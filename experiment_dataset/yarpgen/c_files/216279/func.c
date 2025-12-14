/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216279
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
    for (unsigned char i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */long long int) arr_1 [i_0] [i_1]);
                var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_0 + 2] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) min((var_11), ((unsigned char)194))))) : (((unsigned int) arr_2 [i_0] [i_0]))))) : (((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0 + 2] [(unsigned char)4] [i_0 + 2]))) % (((var_14) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_6)))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 1; i_2 < 11; i_2 += 2) 
                {
                    for (int i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        {
                            var_17 -= ((unsigned int) ((_Bool) ((int) var_13)));
                            arr_11 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned int) max(((unsigned char)67), ((unsigned char)62)));
                            var_18 = ((/* implicit */unsigned int) arr_9 [i_0] [i_2] [i_2]);
                            var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)200)) ? (1850207212) : (((/* implicit */int) (unsigned char)193))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */long long int) arr_10 [i_0 - 1] [i_0 - 1] [9ULL]);
            }
        } 
    } 
    /* LoopSeq 1 */
    for (int i_4 = 0; i_4 < 20; i_4 += 2) 
    {
        /* LoopSeq 1 */
        for (signed char i_5 = 0; i_5 < 20; i_5 += 3) 
        {
            var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((var_1) * (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_4])))))))) ? ((~(((/* implicit */int) (unsigned char)207)))) : ((+(((/* implicit */int) max((((/* implicit */unsigned char) arr_13 [i_5])), ((unsigned char)72))))))));
            var_22 -= ((/* implicit */int) var_12);
        }
        arr_16 [i_4] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_13 [i_4]))))) ? (((/* implicit */int) (unsigned char)185)) : (((/* implicit */int) ((signed char) 1196230596)))))) ? (min((((/* implicit */int) ((_Bool) var_10))), (((((/* implicit */int) var_11)) / (((/* implicit */int) arr_12 [5])))))) : (((/* implicit */int) ((((/* implicit */int) ((signed char) (_Bool)1))) > (((/* implicit */int) (_Bool)1))))));
        var_23 = ((/* implicit */_Bool) ((((((/* implicit */long long int) (+(((/* implicit */int) arr_12 [i_4]))))) > ((-(arr_15 [i_4] [i_4] [i_4]))))) ? (((((/* implicit */_Bool) var_5)) ? (((((/* implicit */long long int) ((/* implicit */int) arr_12 [(_Bool)1]))) | (var_6))) : (((/* implicit */long long int) ((/* implicit */int) ((arr_13 [i_4]) && (((/* implicit */_Bool) var_0)))))))) : (((/* implicit */long long int) (~(var_5))))));
    }
    var_24 = ((/* implicit */_Bool) max((min((((/* implicit */long long int) var_7)), (((var_14) ? (var_10) : (((/* implicit */long long int) var_13)))))), (((/* implicit */long long int) (+(((/* implicit */int) min((((/* implicit */unsigned char) var_14)), (var_11)))))))));
    var_25 = ((/* implicit */int) var_4);
}
