/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48321
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
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        arr_4 [i_0] = min((((/* implicit */unsigned int) (-(((/* implicit */int) min((arr_2 [i_0]), (arr_0 [i_0]))))))), (min((3210252329U), (((/* implicit */unsigned int) (_Bool)1)))));
        arr_5 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) max((arr_0 [i_0]), (arr_0 [i_0])))) | (((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (unsigned char)187))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 4) /* same iter space */
    {
        arr_8 [i_1] = arr_1 [i_1];
        var_16 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_1])) == (((/* implicit */int) (_Bool)1))));
        arr_9 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) max(((short)8614), (arr_2 [i_1]))))) / (((((/* implicit */_Bool) ((unsigned int) arr_0 [(short)8]))) ? (min((var_10), (var_9))) : (((/* implicit */unsigned int) var_0))))));
    }
    for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 4) /* same iter space */
    {
        arr_12 [i_2] [i_2] = ((/* implicit */unsigned int) (~(17030005836566158642ULL)));
        arr_13 [i_2] [(short)19] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 6137802718768681441ULL)) && (((/* implicit */_Bool) 12308941354940870175ULL))));
        arr_14 [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_2] [(short)4]))) | (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (2873198282267770897ULL)))) ? ((~(7U))) : (((var_10) & (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_2])))))))));
        var_17 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((signed char) 1207874937)))));
    }
    for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 4) /* same iter space */
    {
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 4) 
        {
            var_18 &= ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_19 [i_3] [i_4]))));
            arr_20 [i_3] [i_3] [i_4] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_3] [i_3]))));
            arr_21 [i_3] [i_3] [i_3] = ((/* implicit */int) (~(arr_3 [i_4] [i_3])));
            var_19 = ((/* implicit */signed char) arr_11 [i_3] [i_3]);
            arr_22 [(signed char)14] [i_3] [i_4] = ((/* implicit */unsigned char) var_13);
        }
        /* vectorizable */
        for (unsigned int i_5 = 2; i_5 < 21; i_5 += 4) 
        {
            arr_25 [i_5] [i_3] = ((/* implicit */unsigned int) 1918145470);
            arr_26 [i_3] [i_5] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 7U)) ? (12308941354940870175ULL) : (((/* implicit */unsigned long long int) var_0)))) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_3] [i_3] [i_5 + 1])))));
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 22; i_6 += 3) 
        {
            var_20 = ((/* implicit */unsigned long long int) arr_17 [i_3]);
            /* LoopNest 3 */
            for (int i_7 = 2; i_7 < 18; i_7 += 3) 
            {
                for (unsigned int i_8 = 4; i_8 < 19; i_8 += 2) 
                {
                    for (signed char i_9 = 0; i_9 < 22; i_9 += 2) 
                    {
                        {
                            var_21 = ((/* implicit */int) var_12);
                            var_22 = ((/* implicit */unsigned char) ((((/* implicit */int) (short)9517)) | (((/* implicit */int) (_Bool)0))));
                            arr_41 [i_3] [i_6] [i_7 + 3] [i_8] [i_9] = ((/* implicit */unsigned char) (~(arr_38 [i_8 - 4] [i_8 - 3] [i_8] [i_8 - 4])));
                            var_23 = ((/* implicit */int) var_13);
                            arr_42 [i_8] [14U] [i_7] [i_8] = ((/* implicit */unsigned char) ((signed char) (-(1445821536))));
                        }
                    } 
                } 
            } 
        }
        for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
        {
            var_24 = ((/* implicit */unsigned int) ((unsigned long long int) (-(4005422823272173438ULL))));
            var_25 = ((/* implicit */int) arr_34 [i_3] [i_3] [i_3] [i_10] [i_10] [i_10 + 1]);
        }
        arr_45 [i_3] [i_3] = (_Bool)1;
        arr_46 [i_3] [i_3] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_2))))), (((((/* implicit */_Bool) arr_32 [i_3] [i_3] [i_3])) ? (arr_32 [i_3] [i_3] [i_3]) : (arr_32 [i_3] [i_3] [i_3])))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_11 = 1; i_11 < 18; i_11 += 4) 
        {
            var_26 = ((/* implicit */unsigned int) ((signed char) arr_1 [i_11 + 4]));
            var_27 = ((/* implicit */unsigned int) (unsigned char)50);
            arr_49 [i_11] [i_11] = ((/* implicit */_Bool) ((unsigned long long int) (-(2873198282267770897ULL))));
            arr_50 [i_11] = ((int) ((((/* implicit */_Bool) (unsigned char)3)) ? (((/* implicit */int) (short)-2030)) : (((/* implicit */int) (signed char)-22))));
        }
        arr_51 [i_3] = ((/* implicit */int) var_6);
    }
    var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) >= (((/* implicit */int) var_11))))), (var_1))))));
}
