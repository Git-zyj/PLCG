/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26238
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
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        var_17 = ((/* implicit */unsigned short) min((((/* implicit */int) (unsigned short)20094)), (247801639)));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 13; i_4 += 4) 
                        {
                            {
                                arr_12 [i_1] [i_2] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 959726546U)) ? (3335240760U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)54)))));
                                arr_13 [i_2] = ((/* implicit */short) ((unsigned long long int) min((((/* implicit */unsigned int) ((unsigned char) arr_8 [i_4] [i_3] [i_2] [i_1] [i_0] [i_0]))), (var_11))));
                                var_18 = min((((((/* implicit */_Bool) (+(var_2)))) ? (arr_11 [i_0] [i_1] [i_1] [i_3] [i_4]) : (((/* implicit */int) min((((/* implicit */unsigned short) (short)-7442)), (arr_2 [i_0])))))), (((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_3] [i_0])));
                                var_19 *= (!(((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) 584918195318960454LL)), (2100963473312884330ULL))) | (((/* implicit */unsigned long long int) 2932264770U))))));
                            }
                        } 
                    } 
                    var_20 ^= ((/* implicit */unsigned char) (~(((/* implicit */int) ((arr_7 [i_0] [i_0] [i_1] [i_2]) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))))));
                    var_21 = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_5 [i_2] [i_2] [i_1] [i_0])))) ? (min((((/* implicit */unsigned long long int) ((var_4) + (((/* implicit */unsigned int) -998905318))))), (18343910254217205074ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_7 [i_0] [i_0] [i_2] [i_1]), (((/* implicit */unsigned long long int) var_16))))) ? (((((/* implicit */int) var_0)) >> (((2932264770U) - (2932264759U))))) : ((~(((/* implicit */int) (signed char)-47)))))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 13; i_5 += 4) 
        {
            for (unsigned long long int i_6 = 2; i_6 < 12; i_6 += 1) 
            {
                {
                    arr_19 [i_0] [i_6] [i_6] |= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (+(arr_7 [i_0] [i_0] [i_0] [i_6])))) ? (((/* implicit */int) ((((/* implicit */unsigned int) var_7)) >= (3335240750U)))) : (((/* implicit */int) ((unsigned short) arr_5 [i_0] [i_5] [i_6] [i_0]))))) >= (((((/* implicit */_Bool) -1550032208)) ? (((/* implicit */int) (unsigned short)34265)) : (((/* implicit */int) (short)-7725))))));
                    var_22 = ((/* implicit */signed char) arr_1 [i_5]);
                    var_23 = ((/* implicit */unsigned short) (~(max(((-(((/* implicit */int) (unsigned short)65535)))), (var_8)))));
                }
            } 
        } 
    }
    for (int i_7 = 1; i_7 < 9; i_7 += 4) 
    {
        var_24 = ((/* implicit */_Bool) max((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) var_12)) : (3335240721U)))) + (((6768133691614163131ULL) + (((/* implicit */unsigned long long int) arr_16 [i_7] [i_7] [i_7])))))), (((/* implicit */unsigned long long int) (~(3005109545U))))));
        var_25 = ((/* implicit */int) ((((((/* implicit */unsigned long long int) 247801639)) > (5638948677946135708ULL))) ? (((9742738456101621189ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-23910))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-31)))));
        var_26 = ((/* implicit */unsigned char) var_1);
    }
    var_27 = ((/* implicit */signed char) (+(((((var_7) / (((/* implicit */int) (signed char)1)))) + (((((/* implicit */int) (signed char)50)) % (((/* implicit */int) (signed char)-54))))))));
    var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) ((((/* implicit */int) var_5)) != (max((var_8), (((((/* implicit */int) var_15)) % (((/* implicit */int) var_0)))))))))));
    var_29 = ((/* implicit */short) (!(var_0)));
    var_30 = var_10;
}
