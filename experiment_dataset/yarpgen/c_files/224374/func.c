/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224374
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
    var_11 = ((/* implicit */unsigned char) min((((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) var_5))) & (var_2))) <= (((/* implicit */long long int) ((/* implicit */int) var_10)))))), ((-(((/* implicit */int) var_6))))));
    /* LoopSeq 3 */
    for (signed char i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 2; i_1 < 23; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    var_12 += ((/* implicit */unsigned int) (~(((/* implicit */int) max((((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) arr_4 [(unsigned char)5] [(signed char)22] [i_2] [i_2])))), (((((/* implicit */int) arr_2 [i_1])) != (((/* implicit */int) (_Bool)1)))))))));
                    var_13 = var_2;
                }
            } 
        } 
        var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) var_0))));
    }
    for (unsigned int i_3 = 3; i_3 < 15; i_3 += 1) 
    {
        var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) max((((/* implicit */int) ((_Bool) max((((/* implicit */unsigned int) var_6)), (var_8))))), ((+((+(((/* implicit */int) var_1)))))))))));
        var_16 = ((/* implicit */short) min(((-(((/* implicit */int) ((((/* implicit */int) var_9)) != (((/* implicit */int) var_5))))))), (min((((/* implicit */int) arr_3 [i_3 - 3] [i_3] [i_3])), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_2 [i_3]))))))));
        /* LoopNest 2 */
        for (unsigned int i_4 = 0; i_4 < 16; i_4 += 2) 
        {
            for (signed char i_5 = 3; i_5 < 14; i_5 += 3) 
            {
                {
                    arr_13 [i_3] [i_3 - 3] [i_4] [i_5 - 3] = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_3] [i_4] [17U] [i_5 + 2]))))) == (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)4356)))))));
                    var_17 = ((/* implicit */unsigned char) min((((min((((/* implicit */unsigned long long int) 15U)), (11348260747439919673ULL))) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_3]))))), (((/* implicit */unsigned long long int) var_8))));
                    var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) var_4))));
                }
            } 
        } 
        var_19 = ((((((/* implicit */long long int) ((/* implicit */int) var_9))) / (min((((/* implicit */long long int) arr_5 [i_3])), (arr_0 [i_3]))))) <= (((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_3])))))))));
        arr_14 [i_3] = ((/* implicit */unsigned int) (+(((/* implicit */int) var_0))));
    }
    for (unsigned char i_6 = 1; i_6 < 13; i_6 += 1) 
    {
        var_20 ^= (((+(((arr_10 [(_Bool)1] [i_6 - 1] [(_Bool)1] [(_Bool)1]) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))))) * (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [(short)2]))));
        var_21 -= (!(((/* implicit */_Bool) arr_10 [i_6] [i_6] [i_6 - 1] [i_6 - 1])));
    }
}
