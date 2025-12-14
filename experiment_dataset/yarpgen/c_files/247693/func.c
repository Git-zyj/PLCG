/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247693
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
    var_20 = ((/* implicit */unsigned short) ((short) (!(((/* implicit */_Bool) var_16)))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                var_21 = ((/* implicit */unsigned long long int) min((var_21), (((((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_0])) ? (arr_0 [i_1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-512)))))));
                /* LoopSeq 3 */
                for (short i_2 = 0; i_2 < 20; i_2 += 2) /* same iter space */
                {
                    var_22 = ((/* implicit */signed char) 10539532825017843116ULL);
                    var_23 = ((/* implicit */int) ((arr_0 [(_Bool)1] [i_0]) + (((arr_5 [i_0] [i_0] [i_0]) + (((/* implicit */unsigned long long int) ((/* implicit */int) (short)512)))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 2; i_3 < 18; i_3 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (short i_4 = 0; i_4 < 20; i_4 += 2) /* same iter space */
                        {
                            var_24 = ((/* implicit */unsigned int) ((signed char) var_2));
                            arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] |= arr_8 [i_1] [i_2] [i_3 - 1];
                        }
                        for (short i_5 = 0; i_5 < 20; i_5 += 2) /* same iter space */
                        {
                            arr_15 [i_0] [i_1] [i_1] [i_2] [i_2] |= ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_3] [i_2] [(signed char)6] [(signed char)6]))) + (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)117)) ? (arr_7 [(signed char)17] [i_1] [i_2] [i_2]) : (arr_7 [i_0] [i_1] [i_2] [i_3])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (unsigned short)4092)))) : (arr_7 [(short)4] [i_2] [i_3] [i_5]))));
                            arr_16 [i_0] [i_1] [i_1] [i_5] [i_5] = ((/* implicit */unsigned long long int) ((signed char) ((unsigned short) ((((/* implicit */_Bool) var_9)) ? (-327830488553007723LL) : (327830488553007723LL)))));
                            arr_17 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)0)) << (((((((((/* implicit */_Bool) var_0)) ? (var_6) : (arr_8 [i_5] [i_5] [i_2]))) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_3]))))) - (8983228884956003694ULL)))));
                        }
                        arr_18 [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) (signed char)-15)) : (0)))) ? (((/* implicit */unsigned long long int) (~(-6580372000615468527LL)))) : (arr_6 [i_0] [i_0] [i_0] [i_3 - 2])))) ? (((((/* implicit */_Bool) arr_10 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_2] [i_3 + 2] [i_3]))) : (((((/* implicit */_Bool) 1073741823)) ? (arr_0 [i_1] [(unsigned short)12]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0] [11LL] [i_2] [i_0]))))))) : ((~(((((/* implicit */_Bool) 0)) ? (9887275097886563704ULL) : (var_16)))))));
                    }
                    var_25 = ((/* implicit */signed char) ((((((unsigned long long int) (short)32767)) <= (arr_14 [i_1] [8]))) ? (arr_0 [i_0] [i_2]) : (((((((/* implicit */_Bool) var_1)) ? (arr_2 [i_0] [i_1] [i_2]) : (18227350466471115632ULL))) ^ (((0ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)47876)))))))));
                    var_26 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) arr_9 [i_2] [i_2] [i_1] [i_0] [i_0]))) ? (((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_1] [i_2] [i_2])) ? (((/* implicit */int) arr_13 [i_0] [i_1] [i_2] [i_0])) : (((/* implicit */int) (unsigned char)161)))) : (((/* implicit */int) ((arr_9 [18] [18] [i_0] [i_1] [3ULL]) > (((/* implicit */int) arr_13 [i_1] [i_1] [i_2] [i_1])))))));
                }
                /* vectorizable */
                for (short i_6 = 0; i_6 < 20; i_6 += 2) /* same iter space */
                {
                    var_27 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)161)) ? (14U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)47853)))));
                    arr_21 [i_6] [i_1] [i_0] |= (-2147483647 - 1);
                }
                for (short i_7 = 0; i_7 < 20; i_7 += 2) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned int i_8 = 0; i_8 < 20; i_8 += 4) 
                    {
                        for (unsigned long long int i_9 = 0; i_9 < 20; i_9 += 1) 
                        {
                            {
                                arr_29 [i_8] = ((((((/* implicit */_Bool) (short)32749)) && (((/* implicit */_Bool) 11578114148379538278ULL)))) ? (((((/* implicit */_Bool) -2581810933461770450LL)) ? (((/* implicit */unsigned long long int) arr_12 [i_0] [i_7] [i_0] [i_9])) : (13854238556733604772ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_8)))) > (((((/* implicit */_Bool) var_1)) ? (arr_0 [i_1] [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-74))))))))));
                                arr_30 [i_1] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((unsigned int) arr_13 [i_0] [(signed char)9] [i_7] [i_8]))) >= (6868629925330013324ULL)));
                            }
                        } 
                    } 
                    var_28 = ((/* implicit */int) ((((/* implicit */_Bool) (short)30720)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (arr_8 [i_0] [i_1] [(unsigned char)16])))) ? (((long long int) 648954224990647742ULL)) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_7]))))) : (((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0])) && (((/* implicit */_Bool) var_5))))))))));
                    arr_31 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */int) ((unsigned long long int) (_Bool)1));
                }
            }
        } 
    } 
}
