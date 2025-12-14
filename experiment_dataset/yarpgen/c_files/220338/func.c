/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220338
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
    var_19 &= ((/* implicit */unsigned int) (-(((/* implicit */int) var_9))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (unsigned char i_2 = 4; i_2 < 10; i_2 += 4) 
            {
                {
                    var_20 = ((/* implicit */short) (!(((/* implicit */_Bool) ((long long int) min((((/* implicit */int) (unsigned short)0)), (var_10)))))));
                    /* LoopSeq 3 */
                    for (short i_3 = 1; i_3 < 11; i_3 += 3) 
                    {
                        arr_8 [i_3] [i_3] = ((/* implicit */long long int) ((min(((+(((/* implicit */int) (unsigned short)39649)))), (var_6))) / (((((/* implicit */_Bool) 2305843009213693824LL)) ? (((/* implicit */int) (unsigned char)106)) : (((/* implicit */int) (unsigned char)142))))));
                        arr_9 [i_3] = ((/* implicit */unsigned char) var_16);
                    }
                    /* vectorizable */
                    for (long long int i_4 = 0; i_4 < 13; i_4 += 2) 
                    {
                        var_21 = ((/* implicit */unsigned int) var_2);
                        arr_12 [i_0] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) (unsigned char)106);
                    }
                    /* vectorizable */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)149)) + (((/* implicit */int) var_17))))) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_5))))))));
                        var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)107)) ? (-203160472) : (((/* implicit */int) ((((/* implicit */long long int) var_8)) == (var_11)))))))));
                    }
                    /* LoopNest 2 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        for (unsigned long long int i_7 = 0; i_7 < 13; i_7 += 2) 
                        {
                            {
                                var_24 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max((min((var_1), (((/* implicit */long long int) var_13)))), (((/* implicit */long long int) (unsigned char)171))))), (((unsigned long long int) (!((_Bool)1))))));
                                arr_22 [(_Bool)1] [i_1] [(unsigned char)10] [i_1] [(unsigned char)11] [i_1] [i_1] = ((/* implicit */unsigned short) max((((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) var_11))))), ((~(((/* implicit */int) var_17))))));
                                var_25 &= ((/* implicit */long long int) max(((~(((/* implicit */int) ((var_0) == (((/* implicit */unsigned int) ((/* implicit */int) var_15)))))))), (((/* implicit */int) (unsigned char)106))));
                                var_26 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) min(((unsigned char)147), (((/* implicit */unsigned char) (_Bool)0)))))))) ? (((long long int) (_Bool)1)) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */long long int) min((min((((/* implicit */int) max(((unsigned short)47903), (((/* implicit */unsigned short) (unsigned char)105))))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (_Bool)1)))))), (var_6)));
    var_28 = ((/* implicit */short) min((6343115090494264340LL), (((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */int) (unsigned char)16)) != (((/* implicit */int) (unsigned char)149))))))))));
}
