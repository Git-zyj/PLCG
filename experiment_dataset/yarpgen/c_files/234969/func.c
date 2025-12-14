/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234969
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 24; i_4 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((arr_7 [i_0] [i_1] [i_2] [i_2] [i_4] [i_3]) && (((/* implicit */_Bool) (unsigned short)65535)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_19))))) : (((((/* implicit */int) (unsigned short)32760)) | (((/* implicit */int) var_18))))))) & (((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_2] [i_2] [i_4])) ? (((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_2] [i_2] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (arr_2 [(unsigned short)22]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                                var_21 -= ((/* implicit */_Bool) (unsigned char)0);
                                arr_12 [(unsigned short)6] [i_1] [i_2] [i_3] [i_4] |= ((/* implicit */unsigned short) min(((-(((((/* implicit */int) var_3)) * (((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [(_Bool)1] [i_4] [(unsigned char)14])))))), (((/* implicit */int) ((((((/* implicit */int) (unsigned short)1)) % (((/* implicit */int) arr_5 [(_Bool)1] [i_2] [i_2])))) != (((/* implicit */int) (unsigned short)8)))))));
                            }
                        } 
                    } 
                    arr_13 [i_2] [i_2] = ((/* implicit */unsigned short) max(((-(((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) var_19)))))), (((/* implicit */int) max((var_1), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)21))))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 24; i_5 += 1) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 24; i_6 += 4) 
                        {
                            {
                                arr_20 [i_0] [i_2] [i_2] [i_5] [i_5] = ((/* implicit */_Bool) (unsigned short)5);
                                var_22 -= ((/* implicit */unsigned char) max((var_9), (var_4)));
                                var_23 = ((/* implicit */unsigned char) arr_4 [i_1] [i_6]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_7 = 0; i_7 < 24; i_7 += 4) 
                    {
                        for (unsigned short i_8 = 0; i_8 < 24; i_8 += 2) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_9 [i_0] [i_0] [i_2] [i_2] [i_8]))));
                                var_25 = ((/* implicit */_Bool) ((unsigned char) arr_18 [i_7] [(unsigned char)10] [i_0] [i_7] [i_0]));
                                arr_25 [i_1] [i_1] [i_2] [i_7] [i_0] [i_2] [i_1] = ((/* implicit */unsigned short) (-(((/* implicit */int) max(((unsigned char)255), (((/* implicit */unsigned char) arr_7 [i_0] [i_1] [i_0] [i_2] [i_1] [(_Bool)1])))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_9 = 0; i_9 < 24; i_9 += 3) 
                    {
                        for (unsigned short i_10 = 0; i_10 < 24; i_10 += 3) 
                        {
                            {
                                arr_31 [i_2] [i_9] [i_2] [i_0] [i_9] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) var_3)) / (((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)65535))))) && (((/* implicit */_Bool) var_1)))))));
                                var_26 = ((/* implicit */unsigned char) arr_2 [i_10]);
                                var_27 = (!(((/* implicit */_Bool) arr_23 [i_0] [i_1] [i_2] [i_9] [i_10])));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_28 = ((unsigned short) var_0);
    var_29 = ((/* implicit */_Bool) (~(((/* implicit */int) var_1))));
    var_30 = ((/* implicit */unsigned char) max((((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)65518)))), ((-(((((/* implicit */int) var_14)) + (((/* implicit */int) (unsigned short)32773))))))));
}
