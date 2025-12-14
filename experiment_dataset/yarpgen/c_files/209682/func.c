/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209682
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
    for (int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        var_12 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) <= (((/* implicit */int) (signed char)-1))))) * (((/* implicit */int) var_2))));
        arr_4 [i_0] = ((/* implicit */int) var_10);
        arr_5 [i_0] [i_0] = var_3;
    }
    var_13 = ((/* implicit */_Bool) (~(534221323U)));
    /* LoopSeq 2 */
    for (unsigned char i_1 = 1; i_1 < 23; i_1 += 1) 
    {
        arr_8 [i_1 - 1] = ((/* implicit */long long int) (short)6575);
        arr_9 [i_1] [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1 + 1])) ? (((/* implicit */int) arr_6 [i_1 - 1])) : (((/* implicit */int) arr_6 [i_1 + 1])))))));
        var_14 -= (-(((/* implicit */int) ((((/* implicit */int) arr_6 [i_1 - 1])) > (((/* implicit */int) arr_6 [i_1 + 1]))))));
    }
    for (unsigned int i_2 = 0; i_2 < 12; i_2 += 3) 
    {
        var_15 -= ((/* implicit */signed char) (((~(((((/* implicit */_Bool) 0)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_3)))))) ^ ((-(((/* implicit */int) var_8))))));
        var_16 = ((/* implicit */_Bool) ((((((/* implicit */int) var_8)) ^ (-1101273011))) - (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_2])) || (((/* implicit */_Bool) arr_3 [i_2])))))));
        var_17 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) - (((/* implicit */int) var_8))));
        var_18 *= ((/* implicit */unsigned char) var_6);
        /* LoopSeq 3 */
        for (unsigned short i_3 = 0; i_3 < 12; i_3 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned char i_4 = 0; i_4 < 12; i_4 += 2) 
            {
                for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 1) 
                {
                    {
                        var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((((/* implicit */_Bool) arr_12 [i_2] [i_3] [i_2])) || (((/* implicit */_Bool) 2279060663U)))) || (((/* implicit */_Bool) (~(((/* implicit */int) arr_17 [(short)1])))))))) | (((/* implicit */int) min((arr_0 [i_2]), (arr_0 [i_2]))))));
                        var_20 |= ((/* implicit */short) max((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-114))))), (((((/* implicit */_Bool) (unsigned short)8191)) ? (((/* implicit */int) (short)6575)) : (((/* implicit */int) (unsigned char)84))))));
                    }
                } 
            } 
            arr_20 [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) -5873555292778800252LL);
        }
        /* vectorizable */
        for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 3) 
        {
            var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) 0)) ? (((/* implicit */long long int) 7)) : (9101169556820719196LL))))));
            var_22 = ((/* implicit */unsigned long long int) (short)0);
            arr_23 [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_14 [(short)4] [i_6] [i_6])) / (((/* implicit */int) (signed char)100))))) && (((/* implicit */_Bool) var_5))));
        }
        for (signed char i_7 = 0; i_7 < 12; i_7 += 2) 
        {
            /* LoopNest 3 */
            for (int i_8 = 0; i_8 < 12; i_8 += 3) 
            {
                for (short i_9 = 0; i_9 < 12; i_9 += 3) 
                {
                    for (unsigned int i_10 = 0; i_10 < 12; i_10 += 1) 
                    {
                        {
                            arr_33 [i_2] [i_2] [i_7] [i_8] [i_8] [i_9] [i_10] = ((/* implicit */unsigned short) (~(((/* implicit */int) max((((/* implicit */unsigned short) var_3)), (arr_10 [i_7]))))));
                            var_23 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) 2281170406U)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (short)28115))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) ((((/* implicit */unsigned long long int) var_10)) == (arr_29 [i_10] [i_9]))))))));
                            var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) ((short) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-5))) - ((+(var_7)))))))));
                            arr_34 [i_2] [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) (~(((/* implicit */int) (signed char)-126)))))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)22))) : (5873555292778800221LL)));
                        }
                    } 
                } 
            } 
            arr_35 [i_2] [i_7] = max((((/* implicit */long long int) (short)-22901)), (-8558980270289518707LL));
            /* LoopNest 2 */
            for (signed char i_11 = 0; i_11 < 12; i_11 += 3) 
            {
                for (unsigned int i_12 = 0; i_12 < 12; i_12 += 4) 
                {
                    {
                        var_25 = ((/* implicit */long long int) max((((/* implicit */int) var_5)), ((((((~(((/* implicit */int) var_9)))) + (2147483647))) << (((/* implicit */int) (!(((/* implicit */_Bool) 3942838359473489586LL)))))))));
                        arr_41 [i_2] [i_7] [i_7] [i_7] [i_12] = ((/* implicit */short) min((((/* implicit */long long int) var_11)), (min((((-5873555292778800262LL) + (((/* implicit */long long int) ((/* implicit */int) (signed char)-73))))), (((/* implicit */long long int) var_9))))));
                        var_26 = ((/* implicit */long long int) (+(((/* implicit */int) ((signed char) 10208984480385079185ULL)))));
                        var_27 = ((/* implicit */unsigned long long int) arr_22 [i_2] [11U]);
                        var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) (-(-1101273011))))));
                    }
                } 
            } 
            var_29 = ((/* implicit */_Bool) max((var_29), ((!(((/* implicit */_Bool) var_7))))));
        }
    }
    var_30 += ((/* implicit */unsigned long long int) var_4);
}
