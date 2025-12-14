/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38958
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 3; i_0 < 23; i_0 += 4) 
    {
        var_10 = ((/* implicit */int) (signed char)86);
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                for (unsigned int i_3 = 0; i_3 < 24; i_3 += 3) 
                {
                    {
                        var_11 = ((/* implicit */int) arr_4 [i_0]);
                        arr_10 [i_0] [i_0] [i_0] [i_0] [(unsigned char)12] = ((/* implicit */short) ((((/* implicit */_Bool) arr_8 [i_0 + 1] [i_0 + 1] [i_0] [i_0 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0]))) : (4795239554326195764ULL)));
                        /* LoopSeq 2 */
                        for (signed char i_4 = 3; i_4 < 23; i_4 += 4) 
                        {
                            arr_13 [i_0] [i_0] [i_0 + 1] [i_1] [i_2] [i_3] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0 - 2])) ? (arr_1 [i_0] [i_0 - 2]) : (((/* implicit */long long int) var_8))));
                            var_12 = (i_0 % 2 == 0) ? (((/* implicit */int) ((arr_3 [i_0]) >> (((arr_3 [i_0]) - (842685510247202157LL)))))) : (((/* implicit */int) ((arr_3 [i_0]) >> (((((arr_3 [i_0]) - (842685510247202157LL))) - (4016373365699343947LL))))));
                        }
                        for (unsigned char i_5 = 1; i_5 < 23; i_5 += 4) 
                        {
                            var_13 = ((/* implicit */int) arr_5 [i_0] [i_0] [i_0]);
                            arr_16 [i_0 - 1] [i_1] [i_0 - 1] [i_3] [i_2] &= ((/* implicit */unsigned int) (((((_Bool)0) || (((/* implicit */_Bool) 13651504519383355852ULL)))) || (((/* implicit */_Bool) 4573324734500745169LL))));
                            var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_2])) ? (arr_9 [i_2]) : (arr_9 [i_2]))))));
                        }
                        arr_17 [i_0] [i_1] [21ULL] [i_2] [i_0] = ((/* implicit */signed char) var_0);
                        arr_18 [i_0] = ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0 - 3] [(_Bool)1])) ? (arr_8 [i_0] [i_0] [i_0 - 2] [i_0 - 2]) : (arr_8 [i_0] [i_0] [i_0 + 1] [i_0]));
                    }
                } 
            } 
        } 
        var_15 = ((/* implicit */signed char) ((((((/* implicit */int) arr_6 [i_0 - 1] [i_0] [(signed char)15])) + (2147483647))) >> (((var_8) - (1372321741)))));
        /* LoopNest 3 */
        for (long long int i_6 = 3; i_6 < 21; i_6 += 1) 
        {
            for (short i_7 = 0; i_7 < 24; i_7 += 4) 
            {
                for (long long int i_8 = 0; i_8 < 24; i_8 += 3) 
                {
                    {
                        arr_28 [i_0 - 3] [i_0] [i_6] [i_7] [i_7] [i_8] = ((/* implicit */long long int) ((arr_15 [i_6] [i_6] [i_0] [i_6 - 2] [i_6]) & (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)0))))))));
                        var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_27 [i_0 - 1] [i_0 - 2] [i_0] [i_0 - 1] [i_0 - 3])) ? (((/* implicit */int) arr_27 [i_0 - 1] [i_0 - 2] [i_0] [i_0 - 1] [i_0 - 3])) : (var_2)));
                        var_17 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_7] [i_7])) ? (((/* implicit */int) (unsigned char)254)) : (arr_2 [i_7] [i_8])));
                        var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_22 [i_7] [i_6] [i_7])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)17)))))))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned long long int i_9 = 1; i_9 < 21; i_9 += 3) 
    {
        arr_32 [i_9] = ((/* implicit */unsigned short) arr_23 [i_9 - 1] [i_9 - 1]);
        /* LoopNest 2 */
        for (unsigned char i_10 = 2; i_10 < 21; i_10 += 4) 
        {
            for (int i_11 = 2; i_11 < 18; i_11 += 4) 
            {
                {
                    var_19 = ((/* implicit */int) min((var_19), (((((/* implicit */_Bool) arr_25 [i_10 - 1] [i_10] [i_11] [i_11 - 1])) ? (((/* implicit */int) arr_25 [i_10 - 2] [i_11] [i_11] [i_11 + 2])) : (var_7)))));
                    /* LoopNest 2 */
                    for (long long int i_12 = 0; i_12 < 22; i_12 += 3) 
                    {
                        for (long long int i_13 = 1; i_13 < 21; i_13 += 3) 
                        {
                            {
                                arr_43 [i_9] [i_12] [i_11] [i_12] [i_13] = arr_27 [i_9] [i_12] [i_12] [i_10] [i_9];
                                var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)44340)) ? (((/* implicit */int) ((short) (unsigned char)255))) : (((/* implicit */int) var_1))));
                                var_21 = ((/* implicit */int) ((unsigned int) ((signed char) (unsigned char)30)));
                                arr_44 [i_9] [i_9] [i_11 - 1] [i_12] [i_13] = ((((/* implicit */_Bool) (unsigned short)52055)) ? (((/* implicit */long long int) ((/* implicit */int) arr_40 [i_11] [i_13]))) : (1080429996713332847LL));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_30 [i_9 + 1])) ? (((/* implicit */int) arr_30 [i_9 + 1])) : (((/* implicit */int) (signed char)30)))))));
                    arr_45 [i_9] [i_9 - 1] = ((/* implicit */unsigned int) ((long long int) 2566767638546570068LL));
                }
            } 
        } 
    }
    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
    {
        var_23 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) -1080429996713332828LL)) ? (2566767638546570049LL) : (-2566767638546570049LL)))) ? (4795239554326195764ULL) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (unsigned short)21195)), (903079420785686002LL)))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1167329180U)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_5 [i_14] [12U] [i_14]))))) || (((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)206)))))))))));
        var_24 = ((((/* implicit */_Bool) arr_12 [i_14] [i_14])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 13651504519383355829ULL)) ? (arr_1 [10LL] [i_14]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255)))))) : (max((((((/* implicit */_Bool) arr_2 [22] [i_14])) ? (13651504519383355806ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_4 [12ULL]))))))));
    }
    var_25 = ((/* implicit */signed char) var_4);
}
