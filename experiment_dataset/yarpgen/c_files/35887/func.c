/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35887
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
    for (unsigned int i_0 = 2; i_0 < 21; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */int) var_2);
                arr_8 [i_0] = ((/* implicit */signed char) min((((/* implicit */long long int) (_Bool)1)), (3201095090319678882LL)));
            }
        } 
    } 
    var_14 = ((/* implicit */long long int) var_5);
    var_15 |= ((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) 8388607))));
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 2) 
    {
        for (short i_3 = 3; i_3 < 9; i_3 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned char i_4 = 0; i_4 < 11; i_4 += 3) 
                {
                    /* LoopSeq 3 */
                    for (int i_5 = 1; i_5 < 9; i_5 += 1) 
                    {
                        var_16 ^= ((/* implicit */int) ((((/* implicit */_Bool) (+(arr_0 [i_3 + 2])))) ? (((((/* implicit */_Bool) min((var_11), (((/* implicit */long long int) (unsigned char)100))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_5 - 1] [i_3 - 2]))) : (min((arr_0 [i_2]), (arr_0 [(unsigned char)14]))))) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_2] [i_2] [i_2])))));
                        arr_20 [i_5] [i_3] [i_4] [i_3 - 1] [i_3] [i_2] = ((/* implicit */int) min((arr_12 [i_3] [i_3 + 2] [i_3]), (((/* implicit */unsigned char) (signed char)-47))));
                        var_17 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_12 [i_2] [i_3 - 3] [i_3])) ? (((/* implicit */int) arr_12 [i_3] [i_3 - 1] [i_3])) : (((/* implicit */int) (unsigned char)133)))) - (((/* implicit */int) arr_12 [i_3] [i_3 - 2] [i_3]))));
                        arr_21 [i_3] [i_2] [i_2] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_2] [i_4] [9])) ? (((/* implicit */int) var_3)) : (arr_13 [i_2] [i_2] [i_2])))) ? (arr_13 [i_3] [(unsigned char)7] [(unsigned char)7]) : ((~(arr_13 [i_2] [i_2] [i_2])))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_6 = 3; i_6 < 10; i_6 += 2) 
                        {
                            arr_24 [(_Bool)1] [(_Bool)1] [i_4] [i_3] [i_5 + 2] [(_Bool)1] [3] = ((/* implicit */unsigned char) min((((/* implicit */short) (signed char)-42)), (var_8)));
                            arr_25 [i_3] [i_3] = ((/* implicit */short) arr_17 [5LL] [i_3] [i_4]);
                            arr_26 [i_2] [i_3] [(short)7] [i_3] [(short)5] [i_3] = ((/* implicit */unsigned long long int) min(((-(arr_17 [i_2] [i_3 + 1] [i_2]))), (((/* implicit */long long int) ((((/* implicit */int) arr_12 [8LL] [6U] [i_3])) / ((+(((/* implicit */int) var_5)))))))));
                            var_18 ^= ((/* implicit */int) 5886962313571914682LL);
                            arr_27 [i_3] = arr_0 [i_2];
                        }
                    }
                    for (unsigned char i_7 = 0; i_7 < 11; i_7 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_8 = 0; i_8 < 11; i_8 += 3) /* same iter space */
                        {
                            arr_33 [i_3] [i_7] [i_4] [i_3] [i_4] [i_3] [4LL] = ((/* implicit */unsigned short) (((_Bool)1) ? (-2822326374485510723LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)37)))));
                            arr_34 [i_3] [1] [i_4] [i_3] [(short)1] [i_3] = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)2))));
                            arr_35 [i_3] [i_3] [(_Bool)1] [i_3] [i_3] = ((/* implicit */signed char) min((((/* implicit */long long int) (signed char)-39)), (max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [(unsigned short)17] [(unsigned char)14])) ? (((/* implicit */int) arr_19 [i_7] [i_7] [i_7] [i_7])) : (((/* implicit */int) var_5))))), ((~(arr_6 [i_4] [i_4])))))));
                            arr_36 [i_3] [i_4] [i_8] = ((/* implicit */_Bool) max((((/* implicit */int) (signed char)-27)), (((((/* implicit */int) (signed char)49)) / (-957897599)))));
                        }
                        for (unsigned long long int i_9 = 0; i_9 < 11; i_9 += 3) /* same iter space */
                        {
                            arr_40 [i_3] [i_3] = ((/* implicit */int) ((((/* implicit */int) (short)5937)) != ((-(((/* implicit */int) arr_31 [i_3 - 1] [10ULL] [i_3] [i_3 + 2] [i_9]))))));
                            arr_41 [i_2] [(short)1] [i_4] [i_2] [i_3] = ((/* implicit */unsigned long long int) var_6);
                            var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) 38723688))));
                            var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)65534))))) ? (((unsigned long long int) arr_22 [i_2] [0] [i_7] [i_7])) : (((/* implicit */unsigned long long int) ((var_12) - (((/* implicit */long long int) 38723693)))))))) ? (((((/* implicit */int) arr_12 [i_3 + 2] [i_3 - 3] [i_3])) << ((((((~(((/* implicit */int) arr_23 [4U] [i_3] [i_3])))) + (33359))) - (23))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)106)))))));
                            arr_42 [i_2] [i_3] [i_4] [i_2] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) (-(((/* implicit */int) (short)-15833)))))) ? (((/* implicit */long long int) min((arr_22 [i_2] [i_3 - 2] [i_3 + 1] [(short)3]), (arr_22 [(unsigned short)0] [i_3 + 1] [i_3 - 2] [i_7])))) : (((((/* implicit */long long int) var_9)) & (((((/* implicit */long long int) ((/* implicit */int) (signed char)-24))) & (-7603288001942471482LL)))))));
                        }
                        arr_43 [i_2] [i_2] [i_3] [(signed char)3] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)71)) ? (((/* implicit */int) (short)5937)) : (((/* implicit */int) (signed char)117))));
                    }
                    for (unsigned char i_10 = 0; i_10 < 11; i_10 += 1) 
                    {
                        arr_46 [i_3] [i_4] [i_3] [i_3] = var_12;
                        arr_47 [i_3] [(_Bool)1] [i_3] [i_3] = ((/* implicit */short) arr_44 [i_2] [i_2] [i_4] [i_10] [i_2]);
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_11 = 0; i_11 < 11; i_11 += 3) 
                    {
                        for (signed char i_12 = 1; i_12 < 8; i_12 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */int) min((var_21), (((((/* implicit */_Bool) (short)-15836)) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)31870)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-9155))) : (1675843072U)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-15861)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)31683)))))))) : (((/* implicit */int) arr_7 [8U] [8U] [i_4]))))));
                                arr_53 [i_4] [i_3] [i_4] [i_3] [i_12] = ((/* implicit */unsigned long long int) arr_52 [i_2] [(unsigned char)4] [i_2] [(unsigned char)4] [(unsigned char)6]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_13 = 1; i_13 < 10; i_13 += 2) 
                    {
                        for (short i_14 = 4; i_14 < 8; i_14 += 2) 
                        {
                            {
                                var_22 -= ((/* implicit */unsigned long long int) 7603288001942471492LL);
                                var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min(((~(var_1))), (((/* implicit */int) arr_10 [i_3 + 2] [i_3]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : ((((_Bool)1) ? (min((arr_37 [i_14]), (((/* implicit */unsigned int) var_8)))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)31870))))))))))));
                                var_24 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_1), (((/* implicit */int) var_4))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)12)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))))) : (var_12)))) ? ((+(((/* implicit */int) var_8)))) : (((((/* implicit */_Bool) arr_15 [i_2])) ? (((/* implicit */int) arr_15 [i_2])) : (533021201))));
                            }
                        } 
                    } 
                }
                for (signed char i_15 = 0; i_15 < 11; i_15 += 2) 
                {
                    arr_62 [i_3] = ((/* implicit */unsigned short) (-(-7603288001942471493LL)));
                    arr_63 [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) -316376681)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-18060))) : (1394016113926796295LL)));
                }
                arr_64 [i_3] [i_3] = ((/* implicit */unsigned long long int) arr_12 [i_2] [i_3] [i_3]);
                arr_65 [i_3] [i_3] [9ULL] = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)106)))))));
                /* LoopSeq 1 */
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                {
                    var_25 -= ((/* implicit */_Bool) min((((/* implicit */int) min((((/* implicit */short) (signed char)-107)), ((short)16352)))), ((~(((/* implicit */int) arr_58 [2ULL] [i_2] [i_3 - 1] [i_3 - 3] [i_3 - 2]))))));
                    var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_58 [8ULL] [(short)9] [i_3 - 3] [(unsigned short)0] [(_Bool)1])) ? (((/* implicit */long long int) ((/* implicit */int) min((arr_51 [(unsigned char)5] [i_2] [i_3 + 1] [i_16] [(unsigned char)5]), (arr_58 [i_2] [i_2] [5LL] [i_2] [i_2]))))) : ((~(arr_6 [i_16] [i_3 - 1]))))))));
                }
            }
        } 
    } 
}
