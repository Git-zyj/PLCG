/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38965
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38965 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38965
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
    var_15 = (+((~(((((/* implicit */_Bool) (unsigned char)224)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (short)-6355)))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 1; i_0 < 7; i_0 += 4) 
    {
        var_16 = ((/* implicit */short) arr_2 [i_0 - 1]);
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) ((4128768U) <= ((+(162533972U))))))));
            arr_6 [i_0] = ((/* implicit */signed char) 1475525564U);
            var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)250))))) & (max((((((/* implicit */long long int) ((/* implicit */int) (signed char)0))) - (arr_5 [i_0]))), (((/* implicit */long long int) -1726245227)))))))));
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 1) 
                {
                    {
                        arr_12 [i_3] [i_1] = ((/* implicit */unsigned int) (~(max((((((/* implicit */_Bool) 7693936153644477458ULL)) ? (((/* implicit */unsigned long long int) arr_2 [i_3])) : (5498838084825005421ULL))), (((/* implicit */unsigned long long int) (unsigned short)0))))));
                        var_19 = ((/* implicit */int) ((unsigned int) ((short) ((((/* implicit */_Bool) (unsigned short)34590)) ? (((/* implicit */long long int) -1220916859)) : (418343872481694049LL)))));
                        arr_13 [i_0] [i_1] [i_3] [i_3] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)192))));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 10; i_4 += 4) 
        {
            var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((long long int) 8191U)))));
            /* LoopNest 2 */
            for (unsigned long long int i_5 = 3; i_5 < 6; i_5 += 2) 
            {
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    {
                        var_21 = ((/* implicit */unsigned char) arr_0 [i_5] [i_6]);
                        /* LoopSeq 2 */
                        for (unsigned short i_7 = 4; i_7 < 9; i_7 += 2) /* same iter space */
                        {
                            var_22 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_25 [i_5] [i_4] [i_5] [i_6] [(short)6]))));
                            arr_27 [i_5] [i_4] = ((((/* implicit */int) (unsigned short)37811)) >> (((((/* implicit */int) (signed char)-7)) + (25))));
                            var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_23 [i_0] [i_0] [i_0] [i_4])) && (((/* implicit */_Bool) ((short) 32768))))))));
                            var_24 = ((/* implicit */short) ((((/* implicit */_Bool) arr_17 [i_0 + 2] [i_5 + 1])) ? (((((/* implicit */_Bool) arr_4 [i_5])) ? (((/* implicit */int) (unsigned short)37811)) : (((/* implicit */int) (unsigned short)27724)))) : (((/* implicit */int) ((((/* implicit */int) arr_4 [i_0])) != (arr_9 [i_0] [i_0] [i_5] [i_6]))))));
                        }
                        for (unsigned short i_8 = 4; i_8 < 9; i_8 += 2) /* same iter space */
                        {
                            arr_31 [i_5] [i_4] [i_6] [i_6] [i_8] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_1 [i_5 + 3]))));
                            var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (unsigned short)37818)) : (((/* implicit */int) (signed char)-80))));
                        }
                    }
                } 
            } 
            var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) ((unsigned char) (+(((/* implicit */int) (unsigned short)7301))))))));
            var_27 = ((/* implicit */unsigned char) (~((+(-1988091205)))));
            arr_32 [i_0] [i_4] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) -1363688251)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)27712))) : (18LL)))));
        }
        /* vectorizable */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned short i_10 = 0; i_10 < 10; i_10 += 4) 
            {
                for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
                {
                    {
                        var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) 18446744073172680704ULL))));
                        /* LoopSeq 4 */
                        for (signed char i_12 = 3; i_12 < 9; i_12 += 4) 
                        {
                            arr_43 [i_0] [i_0] [i_9] [i_11 + 1] [5ULL] = ((/* implicit */signed char) (+((+(((/* implicit */int) (_Bool)1))))));
                            var_29 = (-(((/* implicit */int) arr_28 [i_0] [i_0] [i_0 - 1] [i_9] [i_0] [i_0] [i_0])));
                            arr_44 [i_0] [i_0] [i_10] [i_9] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_0 + 2] [i_11 + 1] [i_12 - 3])) || (((/* implicit */_Bool) arr_16 [i_0] [i_0 + 1]))));
                        }
                        for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) 
                        {
                            var_30 += ((/* implicit */long long int) (~(((/* implicit */int) ((_Bool) -1220916859)))));
                            var_31 = ((/* implicit */long long int) ((int) (-(((/* implicit */int) (short)26709)))));
                            arr_47 [i_0] [i_11] [i_0] [i_11 + 1] [i_11] [i_9] [i_11] = ((/* implicit */int) arr_22 [9LL] [i_11] [i_9]);
                        }
                        for (short i_14 = 0; i_14 < 10; i_14 += 2) 
                        {
                            var_32 = (-(((((/* implicit */_Bool) (unsigned short)27724)) ? (((/* implicit */int) (signed char)-23)) : (((/* implicit */int) arr_14 [i_14] [i_9])))));
                            arr_51 [i_9] [i_10] = ((/* implicit */unsigned char) ((signed char) (-(((/* implicit */int) (unsigned short)27725)))));
                            var_33 = ((/* implicit */unsigned char) min((var_33), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)164))))) ? (((((/* implicit */_Bool) arr_28 [i_10] [i_11] [i_10] [i_14] [i_9] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) 1193217147U)) : (17048276037148848428ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_36 [i_0] [i_9] [i_10] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (short)-26711))) : (-1997413709624106940LL)))))))));
                            var_34 = ((/* implicit */_Bool) (-((-(17048276037148848428ULL)))));
                        }
                        for (unsigned int i_15 = 1; i_15 < 6; i_15 += 4) 
                        {
                            var_35 = ((/* implicit */int) max((var_35), (((/* implicit */int) ((unsigned long long int) -1997413709624106940LL)))));
                            var_36 -= ((/* implicit */unsigned long long int) 8851235483058637188LL);
                        }
                    }
                } 
            } 
            var_37 = ((/* implicit */signed char) arr_1 [i_9]);
        }
    }
    for (unsigned long long int i_16 = 0; i_16 < 19; i_16 += 1) 
    {
        arr_59 [i_16] = (short)32767;
        arr_60 [i_16] = ((/* implicit */unsigned char) arr_55 [i_16]);
    }
    var_38 = ((/* implicit */int) var_2);
}
