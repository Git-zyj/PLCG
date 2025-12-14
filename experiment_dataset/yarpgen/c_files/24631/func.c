/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24631
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
    var_20 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) var_3)) <= (var_10)))) == ((-(((/* implicit */int) var_5))))))) >= (((/* implicit */int) var_1))));
    var_21 = ((/* implicit */int) max(((+(var_19))), (((/* implicit */unsigned int) (+((~(((/* implicit */int) var_3)))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)25119)) ? (0) : (11)));
                /* LoopSeq 3 */
                /* vectorizable */
                for (signed char i_2 = 0; i_2 < 20; i_2 += 1) 
                {
                    /* LoopSeq 4 */
                    for (unsigned short i_3 = 0; i_3 < 20; i_3 += 4) /* same iter space */
                    {
                        var_22 = ((/* implicit */unsigned long long int) var_19);
                        arr_14 [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */_Bool) var_1);
                    }
                    for (unsigned short i_4 = 0; i_4 < 20; i_4 += 4) /* same iter space */
                    {
                        arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (~((~(((/* implicit */int) (unsigned short)19880))))));
                        var_23 = ((/* implicit */unsigned char) ((int) var_7));
                        arr_18 [i_0] = ((/* implicit */long long int) ((signed char) var_2));
                    }
                    for (unsigned char i_5 = 3; i_5 < 19; i_5 += 3) 
                    {
                        arr_21 [i_0] [i_0] = ((/* implicit */int) ((signed char) ((long long int) var_7)));
                        var_24 = ((/* implicit */signed char) ((((/* implicit */int) arr_10 [i_1] [i_1] [i_1])) / (((/* implicit */int) (signed char)-89))));
                    }
                    for (short i_6 = 0; i_6 < 20; i_6 += 1) 
                    {
                        arr_26 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = arr_24 [i_0] [i_0] [i_0] [i_0];
                        arr_27 [i_0] [i_0] [i_0] = ((/* implicit */long long int) var_4);
                        var_25 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)23786)) + (((/* implicit */int) var_3))));
                    }
                    arr_28 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) arr_16 [i_0]);
                }
                for (long long int i_7 = 0; i_7 < 20; i_7 += 2) 
                {
                    var_26 = ((/* implicit */_Bool) max((var_26), ((!(((((/* implicit */int) min(((unsigned short)65535), (((/* implicit */unsigned short) (unsigned char)246))))) > (((/* implicit */int) (!(((/* implicit */_Bool) var_17)))))))))));
                    var_27 = ((/* implicit */unsigned long long int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                }
                for (int i_8 = 1; i_8 < 17; i_8 += 1) 
                {
                    var_28 = ((/* implicit */unsigned char) (~(((/* implicit */int) (!((!(((/* implicit */_Bool) 269223708U)))))))));
                    arr_33 [i_0] [i_0] [i_0] [i_0] = var_14;
                }
                /* LoopSeq 2 */
                for (long long int i_9 = 0; i_9 < 20; i_9 += 1) /* same iter space */
                {
                    var_29 = ((/* implicit */signed char) (+(((((((/* implicit */_Bool) (signed char)-108)) ? (var_19) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))))) / (((/* implicit */unsigned int) arr_20 [i_0] [i_0] [i_0]))))));
                    var_30 = ((/* implicit */unsigned short) arr_7 [i_0]);
                }
                for (long long int i_10 = 0; i_10 < 20; i_10 += 1) /* same iter space */
                {
                    var_31 = ((/* implicit */unsigned short) max((((((/* implicit */int) arr_37 [i_0] [i_0] [i_0] [i_0])) & (((/* implicit */int) var_1)))), (((((((/* implicit */int) arr_15 [i_0])) / (((/* implicit */int) (signed char)-33)))) - (((/* implicit */int) ((short) var_3)))))));
                    var_32 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_29 [i_0] [i_0] [i_0])) - (((/* implicit */int) ((_Bool) ((-1581138867) - (((/* implicit */int) var_9))))))));
                }
                arr_39 [i_0] [i_0] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (arr_0 [i_0])))));
            }
        } 
    } 
}
