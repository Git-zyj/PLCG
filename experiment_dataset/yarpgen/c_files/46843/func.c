/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46843
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
    var_18 = ((/* implicit */signed char) (~(((/* implicit */int) (short)-20709))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 2) /* same iter space */
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) var_5)) + (((/* implicit */int) arr_1 [i_0]))));
        var_19 = ((/* implicit */short) ((unsigned char) var_2));
        var_20 = ((/* implicit */short) (!(((/* implicit */_Bool) ((short) var_10)))));
        arr_4 [18ULL] = ((/* implicit */unsigned long long int) var_16);
    }
    for (signed char i_1 = 0; i_1 < 23; i_1 += 2) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned short i_2 = 0; i_2 < 23; i_2 += 3) /* same iter space */
        {
            arr_12 [(unsigned short)6] [i_2] [i_2] = ((short) (signed char)123);
            /* LoopNest 3 */
            for (unsigned char i_3 = 0; i_3 < 23; i_3 += 2) 
            {
                for (unsigned short i_4 = 0; i_4 < 23; i_4 += 4) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */short) min((var_21), ((short)-21248)));
                            var_22 = ((/* implicit */signed char) 7838097436148425137ULL);
                        }
                    } 
                } 
            } 
            var_23 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_5 [i_1]))));
            /* LoopNest 3 */
            for (unsigned short i_6 = 4; i_6 < 22; i_6 += 2) 
            {
                for (unsigned short i_7 = 0; i_7 < 23; i_7 += 4) 
                {
                    for (unsigned char i_8 = 4; i_8 < 21; i_8 += 2) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (short)20709))) * (((unsigned int) var_6))))) || (((/* implicit */_Bool) ((unsigned long long int) var_7)))));
                            arr_28 [(unsigned short)19] [14U] [(unsigned char)10] [i_7] [14U] [i_8] [i_8 + 2] = ((/* implicit */unsigned char) ((((/* implicit */int) (!(arr_21 [i_6 + 1] [i_6 - 4] [i_6 - 3] [i_8 + 2])))) & (((/* implicit */int) ((unsigned short) arr_26 [i_1] [i_2] [i_6] [i_8 - 4] [i_6 - 3])))));
                            var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((unsigned long long int) (unsigned char)237)))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned short i_9 = 0; i_9 < 23; i_9 += 3) /* same iter space */
        {
            var_26 = ((/* implicit */unsigned char) var_17);
            var_27 = ((/* implicit */unsigned long long int) (~((-(((/* implicit */int) arr_23 [i_1] [i_1] [i_9] [i_9] [i_9]))))));
        }
        var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) var_1))));
        var_29 = ((/* implicit */unsigned long long int) min((var_29), (((/* implicit */unsigned long long int) min(((-(((/* implicit */int) arr_11 [i_1] [i_1])))), (((/* implicit */int) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_11))))), (var_16)))))))));
        var_30 = ((var_15) >= ((-(var_15))));
    }
}
