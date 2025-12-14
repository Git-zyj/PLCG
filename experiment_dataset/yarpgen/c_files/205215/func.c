/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205215
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205215 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205215
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 2; i_0 < 8; i_0 += 2) 
    {
        arr_2 [i_0] [i_0 + 2] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_0 [i_0])) > (((/* implicit */int) min((((/* implicit */signed char) ((var_0) > (((/* implicit */long long int) var_5))))), (((signed char) arr_0 [i_0])))))));
        var_11 = ((/* implicit */short) (~(((((/* implicit */_Bool) arr_1 [i_0 - 2])) ? (arr_1 [i_0 + 2]) : (arr_1 [i_0 - 1])))));
        var_12 = ((/* implicit */unsigned int) min((((/* implicit */int) (short)-18078)), (((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (unsigned char)205)) - (174)))))));
        /* LoopNest 3 */
        for (short i_1 = 1; i_1 < 9; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                for (unsigned char i_3 = 3; i_3 < 9; i_3 += 1) 
                {
                    {
                        var_13 = ((((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_2] [i_1] [i_0 + 2] [i_3 - 2])) || (((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0 + 2] [i_3 - 3]))))) >= (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_2])) / (386417144)))) && (((/* implicit */_Bool) arr_7 [i_3] [i_2] [i_0]))))));
                        /* LoopSeq 1 */
                        for (long long int i_4 = 0; i_4 < 10; i_4 += 4) 
                        {
                            arr_13 [i_0] [i_1] [i_0 + 1] [i_0] [i_0 - 1] = ((/* implicit */unsigned int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)33)));
                            arr_14 [i_0 - 2] [i_0 - 2] [i_0 + 1] [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) 281785794)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (+(3688727408331912310LL)))) ? ((+(arr_10 [i_1] [i_1] [i_3 - 3] [i_4]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (unsigned short)18419)))))))));
                            var_14 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)51))) : (arr_5 [i_1 + 1] [i_1 + 1] [i_4])))) ? (max((arr_10 [i_1] [i_1 - 1] [i_2] [i_3 + 1]), (var_8))) : (((/* implicit */unsigned long long int) min((((/* implicit */int) (signed char)78)), (-281785782))))));
                        }
                        var_15 |= ((/* implicit */long long int) var_8);
                    }
                } 
            } 
        } 
        var_16 = ((/* implicit */unsigned int) (_Bool)0);
    }
    var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) (-(((unsigned long long int) var_7)))))));
    var_18 = ((/* implicit */unsigned short) (+(var_4)));
    var_19 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (8855928662654536624ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)72)))))) ? (((/* implicit */unsigned long long int) min((3670016U), (1739547633U)))) : (var_8)))) ? (((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)3)) ? (((/* implicit */int) (unsigned char)87)) : (8191)))) / (((((/* implicit */_Bool) var_1)) ? (-491068401343318897LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)16118))))))) : (((/* implicit */long long int) (+(((/* implicit */int) (signed char)55)))))));
}
