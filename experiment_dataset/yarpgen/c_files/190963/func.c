/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190963
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
    var_14 = (((_Bool)0) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (unsigned char)57)));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned int i_2 = 1; i_2 < 18; i_2 += 1) 
                {
                    var_15 -= ((/* implicit */short) var_10);
                    var_16 += ((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((signed char) arr_0 [i_1]))), (((((/* implicit */_Bool) var_12)) ? (2564715388U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_2] [i_1] [i_2])))))))) % (((unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_0))) + (arr_8 [i_2 + 2] [i_1] [i_1] [i_0])))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 17; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 20; i_4 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned int) var_6);
                                arr_15 [i_0] = ((/* implicit */int) ((((/* implicit */long long int) 131071)) * (((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-45)) / (((/* implicit */int) arr_6 [(_Bool)1] [i_0] [i_0] [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_10)) > (((/* implicit */int) (short)-15781)))))) : (((((/* implicit */_Bool) (signed char)-59)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_8 [i_0] [16LL] [12LL] [16LL])))))));
                            }
                        } 
                    } 
                }
                for (unsigned short i_5 = 3; i_5 < 18; i_5 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 0; i_6 < 20; i_6 += 3) 
                    {
                        for (unsigned int i_7 = 0; i_7 < 20; i_7 += 3) 
                        {
                            {
                                arr_24 [(_Bool)1] [i_7] [(signed char)5] [i_0] [(_Bool)1] [i_0] [(_Bool)1] = ((/* implicit */short) ((signed char) ((((/* implicit */int) arr_0 [i_0])) / (((/* implicit */int) arr_11 [i_0] [i_6] [i_0])))));
                                arr_25 [i_0] [i_6] [(_Bool)1] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_8 [i_1] [(_Bool)1] [5LL] [(unsigned short)2])))) * (min((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)54))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_5 - 2] [i_0]))) / (11523506342884673660ULL)))))));
                            }
                        } 
                    } 
                    arr_26 [i_0] [i_0] = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) (~(var_9))))))));
                    var_18 += ((/* implicit */long long int) ((((/* implicit */_Bool) -6314160045346497986LL)) ? (1364584539U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                }
                arr_27 [i_0] [i_1] [i_0] = ((_Bool) ((unsigned char) arr_20 [i_0] [18] [i_1] [i_1]));
                arr_28 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((10764834393434285701ULL) == (2759308228058935600ULL))))));
                /* LoopNest 2 */
                for (unsigned long long int i_8 = 1; i_8 < 18; i_8 += 2) 
                {
                    for (short i_9 = 3; i_9 < 18; i_9 += 3) 
                    {
                        {
                            var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((signed char) ((((/* implicit */_Bool) ((var_6) ? (((/* implicit */int) (unsigned char)23)) : (((/* implicit */int) (_Bool)1))))) ? (arr_18 [i_1] [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned short)49586), (((/* implicit */unsigned short) (unsigned char)176))))))))))));
                            arr_36 [i_0] [5U] [i_8] [5U] = ((/* implicit */unsigned short) 2222447769370261771ULL);
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */signed char) min((var_20), (var_0)));
    var_21 &= ((/* implicit */unsigned char) var_2);
    var_22 = ((/* implicit */short) var_0);
}
