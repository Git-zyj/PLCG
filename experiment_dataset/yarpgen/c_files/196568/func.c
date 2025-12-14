/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196568
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
    var_16 = ((/* implicit */unsigned int) var_14);
    var_17 = ((/* implicit */unsigned short) var_11);
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        arr_3 [2U] = ((/* implicit */unsigned short) ((((/* implicit */int) max((arr_1 [i_0]), (arr_1 [i_0])))) + (((/* implicit */int) (signed char)-35))));
        arr_4 [0ULL] = ((/* implicit */unsigned int) 1643216359088366984LL);
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            arr_8 [i_1] [i_0] = ((/* implicit */long long int) arr_0 [i_1]);
            arr_9 [(unsigned short)10] = ((/* implicit */short) ((((/* implicit */int) max((((/* implicit */short) arr_2 [i_0] [i_1])), ((short)32767)))) << (((((((/* implicit */int) arr_1 [i_0])) | (((/* implicit */int) arr_2 [i_1] [i_0])))) - (13015)))));
        }
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 3; i_2 < 14; i_2 += 3) 
        {
            for (signed char i_3 = 0; i_3 < 15; i_3 += 1) 
            {
                {
                    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_12 [i_2] [i_2 - 3])) | (((/* implicit */int) max((var_10), (arr_12 [i_2] [i_2 - 3]))))));
                    var_19 = ((/* implicit */long long int) max((((((/* implicit */int) arr_2 [i_2 - 2] [12LL])) >= (((/* implicit */int) arr_2 [i_2 - 2] [i_3])))), (max((arr_2 [i_2 - 2] [8LL]), (arr_2 [i_2 - 2] [i_2])))));
                    var_20 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */short) min((max(((unsigned char)13), (((/* implicit */unsigned char) (signed char)-35)))), (((/* implicit */unsigned char) arr_0 [i_2 - 1])))))));
                }
            } 
        } 
    }
    for (long long int i_4 = 0; i_4 < 15; i_4 += 2) 
    {
        var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) min((((/* implicit */long long int) ((signed char) arr_7 [i_4] [i_4] [10U]))), (min((((/* implicit */long long int) max(((signed char)-37), (((/* implicit */signed char) arr_0 [i_4]))))), (((((/* implicit */long long int) ((/* implicit */int) var_0))) * (-9128653847716726447LL))))))))));
        var_22 &= ((/* implicit */signed char) ((max((((((/* implicit */int) arr_16 [(_Bool)1] [(signed char)8])) | (((/* implicit */int) var_9)))), (((/* implicit */int) arr_1 [i_4])))) + (((/* implicit */int) arr_2 [i_4] [i_4]))));
        var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((max((arr_0 [(signed char)8]), (arr_2 [i_4] [i_4]))) ? (((((/* implicit */int) (unsigned short)25484)) % (((/* implicit */int) arr_6 [i_4] [i_4])))) : (((((/* implicit */_Bool) arr_7 [(unsigned short)14] [i_4] [i_4])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_5 [(_Bool)1] [8U])))))))));
    }
}
