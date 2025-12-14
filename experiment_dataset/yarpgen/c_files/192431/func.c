/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192431
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
    var_12 = ((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */int) var_6)), (((((/* implicit */_Bool) (unsigned char)161)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_2)))))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned long long int) var_11);
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (int i_2 = 3; i_2 < 18; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_1] [(_Bool)1] [i_0] = ((((/* implicit */_Bool) (-(((/* implicit */int) var_0))))) ? (((/* implicit */unsigned long long int) max(((+(((/* implicit */int) var_10)))), (((/* implicit */int) var_2))))) : (arr_7 [i_0] [i_1] [i_2] [i_2]));
                    var_14 += (+(max((((((/* implicit */_Bool) 6690098986240668970ULL)) ? (arr_1 [i_0]) : (((/* implicit */int) (_Bool)1)))), ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (arr_1 [i_1]))))));
                    arr_10 [i_0] = ((/* implicit */unsigned short) ((_Bool) var_3));
                    arr_11 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) arr_4 [i_2 - 1] [i_1]);
                }
            } 
        } 
        arr_12 [i_0] [i_0] = ((/* implicit */int) arr_7 [18] [i_0] [i_0] [i_0]);
    }
    for (int i_3 = 3; i_3 < 17; i_3 += 2) 
    {
        arr_15 [i_3] = ((/* implicit */unsigned int) arr_5 [i_3] [(_Bool)1]);
        var_15 = ((/* implicit */unsigned int) ((min((var_4), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 6690098986240668970ULL)) ? (((/* implicit */int) arr_4 [i_3 + 1] [i_3 - 2])) : (((/* implicit */int) var_1))))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_4))))));
    }
    var_16 = ((((((var_8) || (((/* implicit */_Bool) 11756645087468882645ULL)))) && (((/* implicit */_Bool) max((((/* implicit */int) var_6)), (var_7)))))) ? (var_11) : (max((((/* implicit */int) var_0)), (((((/* implicit */_Bool) (signed char)-89)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_8)))))));
    var_17 = ((((((((/* implicit */_Bool) var_11)) ? (154723037U) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) > (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_9)) || ((_Bool)1))))))) ? (((long long int) max((((/* implicit */short) var_2)), ((short)10968)))) : (((/* implicit */long long int) (~(((var_11) ^ (((/* implicit */int) var_2))))))));
    /* LoopNest 2 */
    for (signed char i_4 = 0; i_4 < 21; i_4 += 4) 
    {
        for (unsigned short i_5 = 0; i_5 < 21; i_5 += 3) 
        {
            {
                /* LoopNest 3 */
                for (int i_6 = 3; i_6 < 19; i_6 += 3) 
                {
                    for (int i_7 = 0; i_7 < 21; i_7 += 2) 
                    {
                        for (unsigned short i_8 = 0; i_8 < 21; i_8 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */long long int) max((((((/* implicit */_Bool) ((((/* implicit */int) var_2)) - (((/* implicit */int) var_6))))) ? (-957270653) : (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) (short)16973))));
                                arr_31 [i_6] [i_8] [i_7] [i_4] [i_5] [i_6] = ((/* implicit */_Bool) (-(arr_16 [i_4])));
                                arr_32 [i_6] = ((/* implicit */signed char) arr_29 [i_6 - 1] [i_6 - 1] [i_6] [i_6 - 3]);
                                arr_33 [i_6] [i_6] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) | (((((/* implicit */_Bool) arr_25 [i_4] [i_4])) ? (var_7) : (((/* implicit */int) var_10))))))) ? (min(((~(4140244255U))), (arr_28 [i_5] [i_5] [i_6 - 2] [i_7] [i_8]))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_10)) & (((/* implicit */int) var_3)))))));
                                var_19 = ((/* implicit */unsigned int) (-2147483647 - 1));
                            }
                        } 
                    } 
                } 
                arr_34 [i_5] [i_5] [i_4] = ((/* implicit */unsigned char) var_5);
                var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_4] [i_5] [i_4]))) * (arr_28 [13LL] [i_5] [i_5] [i_5] [16])))))));
            }
        } 
    } 
}
