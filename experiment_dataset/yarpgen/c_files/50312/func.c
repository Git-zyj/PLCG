/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50312
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50312 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50312
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                var_18 += ((/* implicit */signed char) (+(((((((/* implicit */int) arr_0 [(short)8] [(_Bool)1])) >= (((/* implicit */int) arr_0 [i_0] [i_1])))) ? ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (short)-19727))) : (34359738367LL))) : (((/* implicit */long long int) arr_3 [i_0] [i_0]))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 16; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        for (int i_4 = 2; i_4 < 15; i_4 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) arr_0 [i_1] [i_3])) > (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_2] [i_0] [i_0]))))) >> (((((unsigned long long int) 4249093524U)) - (4249093503ULL)))));
                                var_20 = ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) arr_11 [i_4] [i_4] [i_4] [i_2] [i_4 - 2] [i_4 - 2])) && (((/* implicit */_Bool) arr_11 [i_4] [i_4] [(unsigned short)1] [i_2] [i_4 + 1] [i_4 - 1])))));
                                var_21 = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) arr_12 [8] [i_2] [i_3 + 1] [i_2])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_5 [(unsigned short)15])))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned short i_5 = 0; i_5 < 16; i_5 += 2) 
                {
                    for (long long int i_6 = 0; i_6 < 16; i_6 += 1) 
                    {
                        for (unsigned short i_7 = 1; i_7 < 13; i_7 += 3) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) ((arr_1 [i_5] [i_5]) | (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) ((unsigned short) arr_1 [i_0] [i_0]))) : (((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)42786))))))));
                                var_23 -= ((((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)50))) : (2986561604175864794LL))))) > (((/* implicit */int) ((((/* implicit */unsigned int) arr_14 [i_5])) == (arr_15 [i_0] [i_1] [i_6] [i_7])))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_8 = 0; i_8 < 16; i_8 += 2) 
                {
                    for (unsigned short i_9 = 2; i_9 < 15; i_9 += 2) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_18 [i_9] [(signed char)6] [8ULL])) ? (((/* implicit */unsigned long long int) ((long long int) arr_22 [6U] [6U] [i_8]))) : (((((/* implicit */_Bool) arr_18 [i_0] [i_1] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-9497))) : (15459300071467907226ULL)))))));
                            var_25 = ((((/* implicit */_Bool) (unsigned short)65535)) && ((!(((/* implicit */_Bool) (signed char)76)))));
                            var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) ((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) >= (4072810343481551864LL))) ? (max((((/* implicit */long long int) arr_17 [i_0] [i_0])), (arr_20 [i_9 - 2]))) : (-2986561604175864795LL))))));
                            arr_26 [i_0] [i_0] [i_9 - 2] [i_9] [i_8] = arr_20 [i_8];
                        }
                    } 
                } 
            }
        } 
    } 
    var_27 -= ((/* implicit */unsigned int) var_1);
    /* LoopNest 3 */
    for (unsigned short i_10 = 2; i_10 < 21; i_10 += 4) 
    {
        for (long long int i_11 = 3; i_11 < 21; i_11 += 4) 
        {
            for (long long int i_12 = 0; i_12 < 22; i_12 += 2) 
            {
                {
                    var_28 = ((/* implicit */int) min((2397936526U), (((/* implicit */unsigned int) (~(((/* implicit */int) min((arr_35 [i_10 - 1] [(_Bool)1] [i_12]), (arr_31 [i_10])))))))));
                    var_29 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) 2986561604175864794LL)) ? (((/* implicit */int) arr_35 [i_10] [i_11] [i_12])) : (((/* implicit */int) arr_28 [i_10]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)249)), ((unsigned short)26237))))) : (arr_34 [i_10] [i_10] [i_10] [i_10]))), (((/* implicit */unsigned long long int) ((((((/* implicit */int) (unsigned short)55784)) >= (((/* implicit */int) (_Bool)1)))) || (((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [(unsigned short)12] [i_11 - 2]))) : (17494633825646896800ULL)))))))));
                    /* LoopNest 2 */
                    for (int i_13 = 1; i_13 < 19; i_13 += 1) 
                    {
                        for (unsigned short i_14 = 0; i_14 < 22; i_14 += 2) 
                        {
                            {
                                var_30 = ((/* implicit */_Bool) arr_30 [i_10]);
                                var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */int) arr_35 [(_Bool)1] [(unsigned short)12] [i_12])) == (((/* implicit */int) (unsigned char)46)))))) ? ((-((-(((/* implicit */int) arr_31 [i_10])))))) : (((((/* implicit */_Bool) ((10549296245592064790ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_37 [i_10] [i_10] [i_10] [i_10] [i_10])))))) ? (((((/* implicit */int) (short)29713)) * (((/* implicit */int) (unsigned char)150)))) : (((/* implicit */int) ((_Bool) 2329881089209872534ULL)))))));
                                var_32 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)169))) % (arr_33 [(short)11])))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_33 [i_10 - 1])) ? (arr_33 [i_10 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_31 [i_10 - 2])))))) : (((((/* implicit */_Bool) arr_33 [(unsigned char)15])) ? (((((/* implicit */_Bool) (signed char)-93)) ? (-2986561604175864799LL) : (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_10]))))) : (((/* implicit */long long int) ((int) 5750225947527866368LL)))))));
                                var_33 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) -8231246540638090226LL))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_15 = 0; i_15 < 22; i_15 += 4) 
                    {
                        for (unsigned int i_16 = 0; i_16 < 22; i_16 += 2) 
                        {
                            {
                                var_34 = ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)50)))))) == (arr_32 [(signed char)0] [i_12])))) > (((/* implicit */int) (!(((/* implicit */_Bool) arr_43 [(_Bool)1] [i_11] [i_12] [(_Bool)1] [(_Bool)1] [i_11]))))));
                                var_35 = ((/* implicit */unsigned short) max((var_35), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) 458311152U)))))));
                                arr_45 [i_10] [i_11] [i_10] [i_12] [i_12] [i_16] = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_36 [i_10] [(signed char)5] [(signed char)0] [i_10] [i_10 - 1] [i_10])))))));
                                var_36 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) min((((/* implicit */signed char) arr_29 [i_10 + 1] [i_10 + 1])), ((signed char)100))))))) ? (((arr_29 [i_11 - 3] [i_11 + 1]) ? (arr_43 [i_11] [i_11] [i_11 + 1] [i_11] [i_11] [i_11 - 3]) : (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_11 - 1] [i_11 + 1]))))) : ((~(arr_43 [i_10] [11U] [i_12] [i_12] [i_15] [i_16])))));
                                var_37 = ((/* implicit */unsigned char) 928211750U);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_17 = 2; i_17 < 19; i_17 += 3) 
                    {
                        for (unsigned short i_18 = 0; i_18 < 22; i_18 += 2) 
                        {
                            {
                                arr_54 [i_12] [i_17] [i_12] [(signed char)7] [i_12] [i_12] = ((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)1) ? (arr_27 [i_10 - 1]) : (arr_27 [i_10 - 2])))) ? ((+(min((arr_32 [i_11] [i_11]), (((/* implicit */unsigned long long int) (_Bool)1)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-77)) ? (((/* implicit */int) arr_30 [i_10 + 1])) : (((/* implicit */int) arr_31 [i_17]))))) ? ((-(((/* implicit */int) (unsigned short)65534)))) : ((-(arr_27 [i_10]))))))));
                                var_38 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_41 [i_10] [i_10 - 1])) ? (((/* implicit */int) arr_47 [i_10] [i_10 - 1] [i_17] [i_10 - 1] [(unsigned short)5] [i_17 - 2])) : (((/* implicit */int) arr_47 [i_10] [i_10 - 1] [9LL] [(_Bool)1] [i_10] [i_17 - 2]))))) ? (min((((/* implicit */long long int) ((unsigned short) arr_34 [i_10] [i_11] [i_11] [i_10]))), (arr_49 [i_17] [i_12]))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) (~(((/* implicit */int) (unsigned short)36062)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
