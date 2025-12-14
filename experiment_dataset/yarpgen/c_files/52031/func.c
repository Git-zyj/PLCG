/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52031
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
    var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2043233859)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_5) || (((/* implicit */_Bool) 3887631180U)))))) : (((((/* implicit */_Bool) var_4)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_9), (((/* implicit */int) var_6))))) ? (var_9) : ((~(((/* implicit */int) var_7)))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 14; i_1 += 2) 
        {
            {
                arr_7 [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 1565008667)) ? (-3510388421948324250LL) : (((/* implicit */long long int) -1275608826)))) > (((/* implicit */long long int) max((arr_5 [i_0 - 1]), (arr_5 [i_0 - 1]))))));
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 17; i_2 += 1) 
                {
                    arr_10 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */unsigned long long int) (+(((((/* implicit */int) (!(((/* implicit */_Bool) 3887631180U))))) ^ (((/* implicit */int) arr_6 [i_0] [i_1] [i_2]))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 17; i_4 += 3) 
                        {
                            {
                                arr_15 [(_Bool)1] [(_Bool)1] [(_Bool)1] |= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)8069)) ? (((/* implicit */int) arr_8 [i_4] [i_1 + 3])) : (((/* implicit */int) arr_8 [i_0 - 1] [i_0 - 1]))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 8069416797885223193ULL)) ? (2090029612U) : (((/* implicit */unsigned int) 1508601439))))) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? (arr_14 [i_0 - 1] [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_3] [i_3] [i_4]) : (arr_14 [16LL] [2U] [16LL] [4U] [4U] [(unsigned char)8] [4U])))) : (max((((/* implicit */unsigned long long int) (signed char)-20)), (16402685201559604881ULL)))))));
                                var_13 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)243))))) > ((~(4035629580U)))));
                                arr_16 [i_0 - 1] [i_0] [i_0] [12U] |= ((/* implicit */unsigned int) (!(arr_8 [i_0] [i_1])));
                                var_14 = ((/* implicit */_Bool) (((~(((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), (var_7)))))) * (min((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_4] [i_4]))) >= (arr_12 [i_0] [i_4] [i_2] [2LL] [i_2])))), (arr_0 [i_0])))));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) (+(max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_3))))), (arr_4 [i_1 + 2] [i_1 + 2]))))))));
                }
                arr_17 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -1142678229)) ? ((~(((((/* implicit */int) var_10)) >> (((1508439564U) - (1508439540U))))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((unsigned int) (_Bool)1))) < (((((/* implicit */unsigned long long int) 3129635561U)) | (13858199655622416516ULL))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_5 = 0; i_5 < 13; i_5 += 3) 
    {
        for (long long int i_6 = 0; i_6 < 13; i_6 += 3) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                {
                    var_16 |= (_Bool)1;
                    var_17 = ((/* implicit */int) ((max((((((/* implicit */_Bool) -2093239088)) ? (1492352195) : (((/* implicit */int) var_7)))), (((/* implicit */int) (!((_Bool)1)))))) >= (((/* implicit */int) var_5))));
                }
            } 
        } 
    } 
}
