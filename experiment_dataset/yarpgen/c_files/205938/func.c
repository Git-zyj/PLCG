/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205938
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205938 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205938
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
    var_11 = ((/* implicit */unsigned int) var_9);
    var_12 = ((/* implicit */short) var_6);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */_Bool) min((arr_3 [i_0] [i_0] [(_Bool)1]), (arr_3 [i_0 + 1] [i_0] [i_0 + 1])));
                var_14 = ((/* implicit */unsigned char) arr_2 [i_0 + 1] [i_1]);
                arr_5 [i_0] [7ULL] [i_0 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)196)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)196))) : (135107988821114880ULL)));
                var_15 = ((/* implicit */unsigned int) ((arr_0 [i_0] [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_0 [i_0] [(unsigned char)8])) < (((/* implicit */int) arr_2 [i_0 + 1] [i_0])))))) : (max((((/* implicit */unsigned long long int) (_Bool)1)), (4431799549942858866ULL)))));
                var_16 = ((/* implicit */unsigned int) var_7);
            }
        } 
    } 
    /* LoopSeq 1 */
    for (long long int i_2 = 1; i_2 < 16; i_2 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_3 = 2; i_3 < 16; i_3 += 2) 
        {
            for (signed char i_4 = 3; i_4 < 18; i_4 += 2) 
            {
                {
                    arr_12 [i_2 - 1] [i_2 + 1] [i_4] [i_3 - 1] = ((/* implicit */int) (_Bool)0);
                    var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) (unsigned short)2761))));
                }
            } 
        } 
        arr_13 [10ULL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) max((((/* implicit */unsigned short) var_9)), (arr_11 [i_2 - 1] [i_2])))) : (((/* implicit */int) ((short) 3169975946429072939ULL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2]))) : (max((((/* implicit */unsigned long long int) arr_11 [i_2 + 2] [i_2 + 1])), (arr_8 [i_2])))));
        var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) min((((var_0) ? (((((/* implicit */_Bool) var_10)) ? (arr_6 [i_2 + 1] [(short)10]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [(unsigned char)7] [16U]))))), (((/* implicit */unsigned long long int) var_10)))))));
        arr_14 [i_2 + 3] = arr_9 [i_2 + 1] [i_2] [i_2 + 3];
        arr_15 [i_2] = ((/* implicit */signed char) (((((_Bool)0) ? (((/* implicit */int) (short)30964)) : (((/* implicit */int) (short)-15723)))) > (((/* implicit */int) var_2))));
    }
    var_19 &= var_2;
}
