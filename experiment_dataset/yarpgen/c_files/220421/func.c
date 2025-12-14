/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220421
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
    /* LoopSeq 4 */
    for (unsigned short i_0 = 1; i_0 < 8; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */signed char) (unsigned short)48418);
        var_19 = ((/* implicit */short) max((((/* implicit */unsigned long long int) (unsigned short)17117)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)190)) ? (arr_3 [i_0 + 4]) : (17113942883462280994ULL)))) ? (max((((/* implicit */unsigned long long int) (_Bool)0)), (17113942883462280994ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_0) || (((/* implicit */_Bool) arr_3 [i_0]))))))))));
    }
    for (long long int i_1 = 0; i_1 < 20; i_1 += 4) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned short) var_12);
        var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) 11584192275666470676ULL))));
        var_21 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) (signed char)5))) && (((/* implicit */_Bool) ((int) ((((/* implicit */int) arr_5 [i_1] [i_1])) | (((/* implicit */int) var_5))))))));
        arr_8 [i_1] &= ((/* implicit */long long int) (+((-(((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1] [i_1]))) % (var_14)))))));
    }
    for (unsigned int i_2 = 0; i_2 < 23; i_2 += 3) 
    {
        var_22 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)-24867))));
        var_23 = ((((_Bool) (!(((/* implicit */_Bool) (unsigned short)48418))))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) var_3))))))) : (arr_9 [i_2] [i_2]));
    }
    /* vectorizable */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_24 = ((/* implicit */_Bool) ((unsigned long long int) arr_13 [i_3] [i_3]));
        /* LoopNest 2 */
        for (unsigned short i_4 = 0; i_4 < 25; i_4 += 4) 
        {
            for (int i_5 = 0; i_5 < 25; i_5 += 3) 
            {
                {
                    var_25 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 3427700408U)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((-5018716078843563359LL) > (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))))))) : (var_9)));
                    var_26 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (short)-12145))));
                    var_27 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (_Bool)1))))) ? (3683479627107939475LL) : (((/* implicit */long long int) 0U))));
                }
            } 
        } 
    }
    var_28 = ((/* implicit */unsigned short) ((111231808074472904LL) & (((/* implicit */long long int) ((/* implicit */int) (short)20737)))));
    var_29 |= ((/* implicit */unsigned long long int) (-(var_6)));
    /* LoopNest 2 */
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        for (signed char i_7 = 4; i_7 < 9; i_7 += 1) 
        {
            {
                arr_23 [i_6] = (!(((/* implicit */_Bool) 3427700408U)));
                var_30 = ((/* implicit */unsigned int) min((((((((/* implicit */unsigned int) ((/* implicit */int) var_5))) < (var_9))) ? (((((/* implicit */_Bool) 11584192275666470676ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [(signed char)4]))) : (arr_13 [i_6] [(signed char)8]))) : ((-(arr_9 [i_6] [(signed char)13]))))), (((/* implicit */long long int) arr_19 [i_7] [1]))));
                arr_24 [i_7] [i_7] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) max((((/* implicit */unsigned int) ((short) (unsigned short)11043))), ((+(0U)))))) <= (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_18))))) ? (((/* implicit */long long int) arr_1 [i_6] [5ULL])) : (var_13)))));
            }
        } 
    } 
    var_31 &= ((/* implicit */short) (-(((/* implicit */int) var_8))));
}
