/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218160
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
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_2 = 1; i_2 < 11; i_2 += 3) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_3 = 0; i_3 < 12; i_3 += 1) 
                {
                    var_19 = ((/* implicit */_Bool) 288230376151711743ULL);
                    arr_10 [i_0] [i_2] [i_2] [i_3] = ((/* implicit */_Bool) min((var_12), (((/* implicit */unsigned long long int) ((arr_7 [i_2]) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_4 [i_1] [i_1]))))) : ((+(var_16))))))));
                    arr_11 [i_2] [i_1] [i_2] [i_2] [i_2 + 1] [i_3] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) arr_8 [i_2 - 1] [i_2] [i_2] [i_2 - 1])), (((unsigned long long int) arr_5 [i_2 - 1] [i_2] [i_2 - 1] [i_2 + 1]))));
                }
                var_20 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? ((~(((/* implicit */int) arr_3 [i_2] [i_1])))) : (((/* implicit */int) ((unsigned char) var_2))))))));
                var_21 = ((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) ((-1091817851) & (((/* implicit */int) arr_8 [i_2] [i_2] [i_2] [i_2]))))) ? ((-(((/* implicit */int) (short)-19174)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_13))))))));
                /* LoopSeq 4 */
                /* vectorizable */
                for (unsigned short i_4 = 0; i_4 < 12; i_4 += 2) 
                {
                    var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((int) arr_9 [i_2 - 1])))));
                    var_23 = ((/* implicit */int) arr_12 [i_0] [i_0] [i_2 - 1] [i_2 + 1] [i_2 + 1] [i_2]);
                    arr_14 [i_2] [i_2] [i_1] [i_1] [i_2] = ((/* implicit */short) var_4);
                    var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) (-(((/* implicit */int) arr_8 [i_2 + 1] [i_4] [i_2] [i_2 + 1])))))));
                }
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    var_25 = ((/* implicit */_Bool) ((short) (short)19165));
                    var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) arr_4 [(short)8] [i_0]))));
                }
                for (unsigned char i_6 = 0; i_6 < 12; i_6 += 4) /* same iter space */
                {
                    arr_19 [i_2] [i_1] [i_2] = ((/* implicit */short) ((unsigned short) var_2));
                    var_27 = ((/* implicit */unsigned int) (short)-19155);
                    arr_20 [i_6] [i_2] [7ULL] [i_1] [i_2] [i_0] = ((/* implicit */_Bool) ((int) ((int) ((short) (_Bool)0))));
                    var_28 = ((/* implicit */short) (!(((/* implicit */_Bool) 1))));
                }
                for (unsigned char i_7 = 0; i_7 < 12; i_7 += 4) /* same iter space */
                {
                    arr_23 [i_0] [i_1] [i_2] [i_0] [i_7] = ((/* implicit */unsigned long long int) (unsigned short)0);
                    arr_24 [i_1] [i_1] [i_2] [i_2] [i_7] = ((/* implicit */_Bool) arr_2 [i_1]);
                }
                var_29 = ((/* implicit */short) max((((/* implicit */unsigned long long int) (_Bool)1)), (arr_16 [i_0] [i_1] [i_2])));
            }
            for (long long int i_8 = 0; i_8 < 12; i_8 += 4) 
            {
                arr_29 [i_0] [i_1] = ((/* implicit */int) (-(arr_27 [i_8] [i_0])));
                var_30 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((short) ((short) var_9))))));
                /* LoopNest 2 */
                for (unsigned long long int i_9 = 0; i_9 < 12; i_9 += 3) 
                {
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        {
                            var_31 = ((/* implicit */unsigned int) ((unsigned short) 13361694194460858947ULL));
                            var_32 = ((/* implicit */unsigned char) ((unsigned short) ((short) var_3)));
                            var_33 = ((/* implicit */long long int) max((var_33), (((/* implicit */long long int) (-(min((((((/* implicit */_Bool) (unsigned short)8335)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [(unsigned short)5] [i_8] [i_9]))) : (arr_16 [i_0] [i_0] [i_8]))), (((/* implicit */unsigned long long int) ((unsigned short) arr_33 [i_0] [i_0] [i_8] [i_9] [i_10]))))))))));
                            var_34 = ((/* implicit */unsigned char) arr_9 [i_0]);
                            var_35 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) (unsigned char)225))) ? (((unsigned long long int) (unsigned short)3081)) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_9])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (_Bool)0)))))));
                        }
                    } 
                } 
            }
            arr_35 [i_0] = ((/* implicit */unsigned char) (_Bool)1);
            arr_36 [(_Bool)1] = ((_Bool) min((arr_3 [i_0] [i_1]), (arr_3 [i_0] [i_1])));
        }
        arr_37 [i_0] = ((/* implicit */long long int) ((int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_22 [i_0] [i_0] [(unsigned short)4]))))))));
        var_36 = ((/* implicit */unsigned long long int) ((unsigned char) ((unsigned char) arr_13 [i_0])));
        var_37 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)32767)) == (((/* implicit */int) (signed char)-5))));
        var_38 = ((/* implicit */_Bool) max((arr_16 [i_0] [4] [i_0]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_9 [i_0]), (((/* implicit */unsigned long long int) (unsigned short)56850))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_31 [i_0] [i_0] [i_0]))) : (((unsigned int) (unsigned short)62454)))))));
    }
    /* vectorizable */
    for (unsigned char i_11 = 0; i_11 < 12; i_11 += 4) /* same iter space */
    {
        var_39 -= ((/* implicit */unsigned char) (!(arr_33 [i_11] [i_11] [i_11] [(unsigned char)4] [i_11])));
        arr_41 [i_11] [i_11] = ((/* implicit */_Bool) arr_16 [i_11] [i_11] [i_11]);
        var_40 *= ((/* implicit */unsigned long long int) ((unsigned char) arr_1 [i_11]));
    }
    var_41 = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) ((_Bool) var_12))) : (((/* implicit */int) var_9))));
    var_42 = ((/* implicit */short) (unsigned short)52713);
    /* LoopNest 3 */
    for (unsigned char i_12 = 2; i_12 < 12; i_12 += 1) 
    {
        for (short i_13 = 0; i_13 < 13; i_13 += 2) 
        {
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                {
                    var_43 -= ((/* implicit */int) arr_47 [i_14] [i_12 + 1]);
                    var_44 += ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_45 [i_12] [i_12 - 2] [i_14])) ? (((/* implicit */long long int) ((/* implicit */int) arr_45 [i_12] [i_12 - 2] [i_12 - 2]))) : (2681066121190265264LL))) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)188)))));
                    var_45 -= ((/* implicit */unsigned long long int) arr_49 [0LL] [i_13] [(_Bool)1] [i_14]);
                    var_46 |= ((/* implicit */signed char) (-(((/* implicit */int) (unsigned char)177))));
                }
            } 
        } 
    } 
    var_47 = ((/* implicit */unsigned short) (-(1684703551)));
}
