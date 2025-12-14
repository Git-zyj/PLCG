/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223604
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223604 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223604
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
    for (short i_0 = 2; i_0 < 14; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 2) /* same iter space */
        {
            var_20 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) 1763853836U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)6144))) : (799914090352170776LL)))));
            var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) var_4)) : (var_16))), (((/* implicit */int) max(((unsigned short)6144), (var_18))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)6171))) : (max((arr_2 [i_0]), (((/* implicit */unsigned int) arr_3 [i_0]))))));
            var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) min((((/* implicit */unsigned int) (unsigned short)59378)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)6155)) ? (((/* implicit */int) (unsigned short)21056)) : (((/* implicit */int) (unsigned short)6157))))) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))))));
            var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) var_6))));
        }
        for (unsigned int i_2 = 0; i_2 < 16; i_2 += 2) /* same iter space */
        {
            var_24 = ((/* implicit */int) max(((unsigned short)6144), ((unsigned short)33100)));
            var_25 = 0ULL;
        }
        var_26 ^= (-(((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (2634938424U) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))));
        /* LoopSeq 2 */
        for (long long int i_3 = 0; i_3 < 16; i_3 += 2) 
        {
            var_27 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_7 [i_0 - 1] [i_3])) ? (arr_7 [i_0 - 1] [i_3]) : (((/* implicit */int) var_13))))));
            var_28 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((4078948737166969890ULL) != (9900350204459164699ULL))))) ^ (18446744073709551615ULL)));
        }
        for (unsigned int i_4 = 0; i_4 < 16; i_4 += 1) 
        {
            var_29 &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_0 - 1])))))));
            var_30 += ((/* implicit */short) (-(((arr_11 [i_0 + 2] [i_0 + 2]) * (arr_11 [i_0 + 2] [i_4])))));
            var_31 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) 2773358661806068469LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_18)))))) : (((((/* implicit */_Bool) (short)-14518)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)59380))) : (var_6))))))));
            /* LoopNest 2 */
            for (signed char i_5 = 0; i_5 < 16; i_5 += 2) 
            {
                for (int i_6 = 0; i_6 < 16; i_6 += 2) 
                {
                    {
                        var_32 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(arr_0 [i_0])))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_1))))) : (min((2913672948U), (arr_0 [i_0])))));
                        arr_19 [i_0] [i_4] [i_5] [i_6] [i_5] = ((/* implicit */unsigned int) var_16);
                    }
                } 
            } 
        }
        var_33 -= ((/* implicit */unsigned int) max((arr_15 [i_0]), (((/* implicit */long long int) var_9))));
        var_34 = ((/* implicit */unsigned int) max((var_34), (((/* implicit */unsigned int) arr_14 [i_0] [i_0 + 2]))));
    }
    /* vectorizable */
    for (signed char i_7 = 0; i_7 < 25; i_7 += 1) 
    {
        arr_22 [i_7] = ((/* implicit */unsigned short) ((long long int) -8566780723447946865LL));
        arr_23 [i_7] = ((/* implicit */unsigned long long int) (+(var_14)));
    }
    var_35 = ((/* implicit */unsigned short) min((var_35), (((/* implicit */unsigned short) (~(((21ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)59374))))))))));
    var_36 = var_4;
    var_37 &= ((/* implicit */unsigned int) var_5);
}
