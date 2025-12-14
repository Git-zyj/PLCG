/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47522
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47522 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47522
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
    for (long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        arr_2 [2U] [2U] |= ((/* implicit */unsigned short) (~((~(((/* implicit */int) min((((/* implicit */unsigned short) arr_0 [i_0])), ((unsigned short)48084))))))));
        var_17 = (-((~((~(((/* implicit */int) arr_0 [i_0])))))));
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                for (unsigned int i_3 = 1; i_3 < 12; i_3 += 2) 
                {
                    {
                        var_18 &= ((/* implicit */_Bool) (+(min((((/* implicit */unsigned int) min((((/* implicit */short) arr_9 [i_0])), ((short)0)))), (max((((/* implicit */unsigned int) -1196045561)), (var_3)))))));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 3) 
                        {
                            arr_16 [i_0] [(_Bool)1] [i_2] [i_2] [4LL] [6ULL] = ((/* implicit */unsigned char) min((min((((/* implicit */long long int) min((((/* implicit */int) arr_11 [i_4] [i_3 - 1] [i_2] [i_0])), (arr_14 [i_2] [i_2])))), ((-(arr_7 [i_2] [i_2] [i_2] [i_0]))))), (((/* implicit */long long int) min((max((arr_11 [i_0] [i_1] [(unsigned char)6] [i_4]), (((/* implicit */unsigned short) arr_0 [i_1])))), (((/* implicit */unsigned short) (!(arr_15 [i_0] [i_2] [i_4])))))))));
                            var_19 = ((/* implicit */int) min(((+((~(arr_5 [i_2] [4ULL] [i_4]))))), (((/* implicit */unsigned long long int) max(((-(((/* implicit */int) var_4)))), ((-(((/* implicit */int) (_Bool)1)))))))));
                            var_20 = ((/* implicit */_Bool) min((((/* implicit */long long int) min((((/* implicit */unsigned int) max((arr_0 [i_1]), (((/* implicit */unsigned char) (_Bool)1))))), ((+(var_3)))))), (min((((/* implicit */long long int) (unsigned short)55483)), (-8418033069738402205LL)))));
                            var_21 -= max((((/* implicit */long long int) (-(min((((/* implicit */unsigned int) (unsigned short)7897)), (3753832723U)))))), (min((((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)65526))))), (min((arr_7 [i_1] [i_1] [i_3] [i_4]), (((/* implicit */long long int) var_11)))))));
                            arr_17 [i_4] [i_2] [i_2] [i_0] [i_2] [i_0] = ((/* implicit */unsigned int) min(((-(((/* implicit */int) max((arr_0 [i_1]), (arr_8 [i_1] [i_1] [i_2] [i_1])))))), (min((min((arr_4 [i_0] [i_1]), (arr_6 [i_2] [(unsigned short)3]))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [6LL] [6LL] [6LL])))))))));
                        }
                        for (unsigned int i_5 = 0; i_5 < 13; i_5 += 1) /* same iter space */
                        {
                            var_22 = ((/* implicit */long long int) (!(((/* implicit */_Bool) -1196045561))));
                            var_23 = ((/* implicit */unsigned short) (~((-((+(((/* implicit */int) var_12))))))));
                            var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) (+(min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)33637))))), (max((((/* implicit */unsigned long long int) (_Bool)1)), (15974386641084356141ULL))))))))));
                            var_25 = ((/* implicit */unsigned char) (~((+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)6)))))))));
                        }
                        /* vectorizable */
                        for (unsigned int i_6 = 0; i_6 < 13; i_6 += 1) /* same iter space */
                        {
                            var_26 &= (-((~(var_13))));
                            arr_25 [i_6] [i_2] [i_2] [i_2] [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)142)))))));
                            var_27 -= ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)32768))));
                        }
                    }
                } 
            } 
        } 
    }
    var_28 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) min((min((var_7), (((/* implicit */unsigned short) var_2)))), (min(((unsigned short)24650), ((unsigned short)48076))))))));
    var_29 = ((/* implicit */int) (-(min((min((((/* implicit */unsigned long long int) var_7)), (var_8))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) var_2)), (var_4))))))));
}
