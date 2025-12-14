/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247510
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247510 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247510
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
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) ((short) (!(((/* implicit */_Bool) 18446744073709551615ULL)))));
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) max(((((~(arr_1 [i_0]))) >> (((max((arr_0 [i_0]), (arr_0 [i_0]))) + (14438829))))), (((/* implicit */unsigned long long int) (((-(arr_0 [i_0]))) / (arr_0 [i_0]))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 1; i_1 < 19; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    var_20 = ((/* implicit */unsigned char) max(((+(((((/* implicit */_Bool) arr_5 [i_0] [i_1])) ? (arr_4 [i_0] [i_1 - 1]) : (arr_7 [i_0]))))), (((/* implicit */unsigned long long int) (-(63))))));
                    arr_10 [i_0] [i_1 - 1] [i_1] = ((/* implicit */unsigned char) ((_Bool) (~(max((((/* implicit */unsigned long long int) arr_5 [i_0] [i_1])), (arr_1 [i_0]))))));
                    var_21 = ((/* implicit */unsigned short) max((max((max((arr_6 [i_2] [i_1]), (((/* implicit */unsigned long long int) arr_9 [i_0])))), (((/* implicit */unsigned long long int) ((unsigned char) arr_7 [i_0]))))), ((~(((arr_7 [i_1 - 1]) << (((arr_0 [i_1 - 1]) + (14438813)))))))));
                    arr_11 [i_1] [i_1] [i_1 - 1] [i_0] = ((unsigned long long int) (unsigned char)242);
                }
            } 
        } 
    }
    for (unsigned char i_3 = 0; i_3 < 18; i_3 += 4) 
    {
        arr_14 [i_3] = ((/* implicit */unsigned long long int) arr_0 [i_3]);
        var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) max((((((/* implicit */_Bool) (+(arr_8 [i_3] [i_3] [i_3])))) ? (((/* implicit */unsigned int) max((arr_8 [i_3] [i_3] [i_3]), (((/* implicit */int) arr_9 [i_3]))))) : (((unsigned int) arr_0 [i_3])))), (((/* implicit */unsigned int) arr_5 [i_3] [i_3])))))));
        var_23 = max((max((max((arr_6 [i_3] [i_3]), (((/* implicit */unsigned long long int) arr_0 [i_3])))), (((unsigned long long int) arr_9 [i_3])))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) 134217727)), (max((((/* implicit */unsigned int) (unsigned short)65530)), (4294967295U)))))));
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        arr_17 [i_4] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(max((arr_15 [i_4] [i_4]), (((/* implicit */unsigned long long int) arr_9 [i_4]))))))) ? ((~((~(arr_0 [i_4]))))) : (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (signed char)-8)) : (20)))));
        arr_18 [i_4] = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) (+(arr_15 [i_4] [i_4]))))) ^ (arr_0 [i_4])));
    }
    var_24 = ((/* implicit */short) var_16);
    var_25 = ((/* implicit */unsigned short) (+(max(((+(var_10))), (max((var_19), (var_1)))))));
}
