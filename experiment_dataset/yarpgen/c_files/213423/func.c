/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213423
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
    var_13 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_8)), (var_3)))) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)171))) ^ (var_6))) : (var_1)))) ? (((((/* implicit */_Bool) ((int) (signed char)-24))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)186))) : (var_6))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_12)) << (((((/* implicit */int) (unsigned char)85)) - (78)))))) || (((/* implicit */_Bool) var_1)))))));
    var_14 -= ((/* implicit */short) ((((/* implicit */_Bool) max(((-(((/* implicit */int) (unsigned char)243)))), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)61446)))))))) ? (((unsigned int) (-(var_3)))) : (((/* implicit */unsigned int) min((((((/* implicit */int) var_5)) / (((/* implicit */int) var_12)))), (((((/* implicit */int) (unsigned short)4090)) ^ (((/* implicit */int) (unsigned short)61446)))))))));
    var_15 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_7)) < (((/* implicit */int) var_8)))))) != (((var_3) & (((/* implicit */unsigned long long int) 1089983192632641458LL)))))))) <= (((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))) ^ (min((var_4), (((/* implicit */long long int) (unsigned char)66))))))));
    var_16 = ((/* implicit */signed char) ((var_1) & (var_6)));
    /* LoopSeq 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_17 = ((/* implicit */_Bool) min((((short) arr_2 [i_0 - 1])), (arr_1 [i_0])));
        /* LoopNest 2 */
        for (unsigned char i_1 = 4; i_1 < 15; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    arr_7 [(unsigned short)10] [i_0] [i_2] [i_2] = (-(((((/* implicit */int) arr_1 [i_0 - 1])) * (((/* implicit */int) var_5)))));
                    var_18 = ((/* implicit */long long int) arr_0 [i_0]);
                }
            } 
        } 
    }
    for (signed char i_3 = 0; i_3 < 17; i_3 += 2) 
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 17; i_4 += 1) 
        {
            for (unsigned int i_5 = 0; i_5 < 17; i_5 += 1) 
            {
                {
                    var_19 = ((/* implicit */int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) min((((/* implicit */unsigned short) var_0)), ((unsigned short)4090))))))) * (510525217095001149ULL)));
                    var_20 = ((/* implicit */long long int) max((var_20), (-1LL)));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_6 = 0; i_6 < 17; i_6 += 3) 
        {
            for (unsigned long long int i_7 = 0; i_7 < 17; i_7 += 3) 
            {
                {
                    arr_23 [i_3] [i_6] = ((/* implicit */_Bool) var_3);
                    arr_24 [14ULL] [i_6] [i_6] = ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_3])) | (((/* implicit */int) (short)1792))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_3])))))) : ((-(var_3))))));
                }
            } 
        } 
        arr_25 [i_3] = ((/* implicit */short) max(((-(((((/* implicit */_Bool) (signed char)111)) ? (4068487164214142574LL) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_3] [(short)2] [i_3]))))))), (((/* implicit */long long int) max((((/* implicit */short) (!(((/* implicit */_Bool) arr_13 [i_3]))))), (((short) (unsigned short)4078)))))));
        arr_26 [i_3] = ((/* implicit */unsigned long long int) (unsigned char)93);
    }
    for (unsigned int i_8 = 0; i_8 < 11; i_8 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            for (short i_10 = 0; i_10 < 11; i_10 += 3) 
            {
                {
                    arr_36 [i_8] [i_9] [i_9] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) var_7)) == ((-(arr_35 [i_8]))))) ? ((-(((/* implicit */int) var_12)))) : (((/* implicit */int) (short)-13814))));
                    var_21 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)171)) ? (20745024992973364LL) : (-1089983192632641430LL)));
                }
            } 
        } 
        var_22 -= ((/* implicit */short) (~((~(((unsigned long long int) (-9223372036854775807LL - 1LL)))))));
        var_23 |= ((/* implicit */unsigned long long int) ((-20745024992973359LL) & (1089983192632641429LL)));
    }
}
