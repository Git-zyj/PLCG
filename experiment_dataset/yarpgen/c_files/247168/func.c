/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247168
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
    var_12 = ((/* implicit */int) var_2);
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_13 = ((/* implicit */unsigned short) max(((-(260046848U))), (((/* implicit */unsigned int) var_10))));
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) arr_0 [i_0] [i_0]);
        arr_4 [i_0] [i_0] = ((/* implicit */_Bool) ((unsigned short) ((((arr_1 [i_0]) - (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) - ((+(260046866U))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned int i_2 = 0; i_2 < 23; i_2 += 2) 
        {
            arr_12 [i_1] = ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) ((var_10) - (((/* implicit */int) var_7))))) ? (2088145088) : (((/* implicit */int) var_4)))));
            arr_13 [i_1] = ((/* implicit */_Bool) (+(240594947U)));
            arr_14 [i_1] = ((/* implicit */unsigned long long int) var_4);
        }
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_14 = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)57559)) / (var_10)))) * (((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1] [i_1]))) * (arr_15 [i_1] [i_1]))))) / (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
            var_15 = ((/* implicit */_Bool) arr_11 [i_1] [i_1] [i_1]);
            arr_17 [i_1] = ((/* implicit */short) ((((/* implicit */int) (signed char)-91)) >= (((((((/* implicit */int) arr_6 [i_3])) + (((/* implicit */int) (unsigned short)13372)))) / (((/* implicit */int) (unsigned char)245))))));
            arr_18 [i_1] [i_1] = ((/* implicit */short) (((-(192847760U))) * (((/* implicit */unsigned int) ((((((/* implicit */int) arr_16 [i_1] [i_3] [i_3])) * (((/* implicit */int) var_9)))) / (((/* implicit */int) (unsigned short)34828)))))));
        }
        var_16 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) max((arr_0 [i_1] [i_1]), (arr_0 [i_1] [i_1])))), ((((_Bool)1) ? (15924386641588872254ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1] [i_1])))))));
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        var_17 ^= ((/* implicit */signed char) (+(max((((var_11) - (((/* implicit */int) (_Bool)1)))), ((-(((/* implicit */int) (short)-5349))))))));
        /* LoopSeq 1 */
        for (short i_5 = 0; i_5 < 22; i_5 += 1) 
        {
            arr_25 [i_5] [i_5] = ((/* implicit */signed char) var_0);
            arr_26 [i_4] = ((/* implicit */unsigned int) ((_Bool) arr_10 [i_4] [i_4]));
            arr_27 [i_4] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) max((((/* implicit */unsigned char) (signed char)124)), ((unsigned char)202)))) ? (((/* implicit */int) (unsigned short)59680)) : (((/* implicit */int) (unsigned short)34828))))));
            var_18 = ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)59))) - (arr_1 [i_4])))) < (((((((/* implicit */unsigned long long int) var_10)) + (11830293166031094568ULL))) - (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_1))))))));
        }
        var_19 = ((/* implicit */short) ((((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_0))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_4)))))) ^ (((/* implicit */long long int) ((((/* implicit */int) var_3)) | (((/* implicit */int) (signed char)121)))))));
        var_20 -= ((/* implicit */unsigned char) var_0);
    }
    var_21 = ((/* implicit */unsigned int) var_5);
}
