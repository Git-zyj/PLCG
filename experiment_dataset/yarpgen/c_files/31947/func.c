/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31947
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
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) max((((/* implicit */int) max((var_19), (((short) (_Bool)1))))), (((((/* implicit */int) max(((unsigned char)134), (((/* implicit */unsigned char) (signed char)18))))) * (((/* implicit */int) min((((/* implicit */short) var_8)), (var_10)))))))))));
        var_21 = ((/* implicit */unsigned long long int) var_12);
    }
    for (signed char i_1 = 0; i_1 < 12; i_1 += 1) 
    {
        arr_5 [i_1] [i_1] = ((/* implicit */unsigned int) max((((/* implicit */long long int) max((((/* implicit */unsigned int) var_6)), ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)134))) : (4242809812U)))))), (min((min((((/* implicit */long long int) arr_0 [i_1])), (var_18))), (((/* implicit */long long int) var_13))))));
        /* LoopSeq 2 */
        for (unsigned char i_2 = 0; i_2 < 12; i_2 += 2) 
        {
            var_22 += ((/* implicit */short) max((min((((/* implicit */long long int) arr_2 [i_2])), (arr_6 [i_1]))), (((/* implicit */long long int) max((var_9), (var_9))))));
            /* LoopNest 3 */
            for (unsigned char i_3 = 3; i_3 < 11; i_3 += 1) 
            {
                for (signed char i_4 = 1; i_4 < 10; i_4 += 2) 
                {
                    for (signed char i_5 = 0; i_5 < 12; i_5 += 2) 
                    {
                        {
                            arr_17 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_3 - 3]))) | (((min((52157507U), (((/* implicit */unsigned int) (unsigned char)122)))) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)134)))))));
                            arr_18 [i_1] [i_2] = ((/* implicit */short) ((int) min((((/* implicit */unsigned long long int) arr_11 [i_1] [i_3 - 2] [i_2] [i_1])), (max((var_7), (((/* implicit */unsigned long long int) (signed char)127)))))));
                            var_23 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) min((arr_13 [i_4 - 1] [i_4] [i_4] [i_4]), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)122))) == (6504762822724039576ULL))))))), (((14907321208480688050ULL) | (((/* implicit */unsigned long long int) arr_6 [i_1]))))));
                            var_24 *= ((/* implicit */unsigned char) var_17);
                        }
                    } 
                } 
            } 
            var_25 = ((/* implicit */int) var_5);
            arr_19 [i_1] = ((/* implicit */short) max((((/* implicit */unsigned int) (signed char)-75)), (517432149U)));
        }
        /* vectorizable */
        for (unsigned char i_6 = 2; i_6 < 10; i_6 += 3) 
        {
            /* LoopNest 3 */
            for (signed char i_7 = 0; i_7 < 12; i_7 += 3) 
            {
                for (short i_8 = 0; i_8 < 12; i_8 += 3) 
                {
                    for (long long int i_9 = 0; i_9 < 12; i_9 += 2) 
                    {
                        {
                            var_26 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1]))) * (6504762822724039576ULL)));
                            arr_31 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) arr_23 [i_1] [i_1] [i_1]);
                        }
                    } 
                } 
            } 
            var_27 += ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_6))) == (var_12)));
        }
    }
    var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) ((((/* implicit */unsigned long long int) min((min((((/* implicit */long long int) -433367729)), (var_3))), (((/* implicit */long long int) ((short) var_6)))))) | (max((((/* implicit */unsigned long long int) ((long long int) var_16))), (((6504762822724039567ULL) / (((/* implicit */unsigned long long int) 2041608260)))))))))));
}
