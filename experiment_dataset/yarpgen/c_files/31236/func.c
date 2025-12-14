/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31236
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
    var_11 = ((/* implicit */long long int) max((((/* implicit */int) var_5)), ((-(((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) (unsigned short)7800)))))))));
    var_12 = ((/* implicit */unsigned short) (-(16363881115568165029ULL)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 3) /* same iter space */
    {
        var_13 = ((/* implicit */int) (((_Bool)0) && (((/* implicit */_Bool) (-(var_7))))));
        var_14 = ((/* implicit */short) (+(((/* implicit */int) (_Bool)0))));
        /* LoopSeq 3 */
        for (long long int i_1 = 0; i_1 < 25; i_1 += 4) /* same iter space */
        {
            var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)17773)) << ((+(((/* implicit */int) (_Bool)1))))));
            var_16 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) << (((var_1) + (3712102668702624100LL)))))) ? (((/* implicit */long long int) ((/* implicit */int) (!((_Bool)0))))) : (arr_2 [i_0])));
        }
        for (long long int i_2 = 0; i_2 < 25; i_2 += 4) /* same iter space */
        {
            var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_0] [i_2] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (3709995609U)));
            arr_6 [i_0] = ((/* implicit */_Bool) arr_1 [i_2] [i_2]);
        }
        for (unsigned short i_3 = 0; i_3 < 25; i_3 += 1) 
        {
            /* LoopSeq 1 */
            for (long long int i_4 = 0; i_4 < 25; i_4 += 3) 
            {
                arr_11 [i_0] [i_0] [(short)10] [i_0] = ((/* implicit */int) (-(arr_8 [i_3] [i_0] [i_3])));
                /* LoopNest 2 */
                for (unsigned int i_5 = 0; i_5 < 25; i_5 += 1) 
                {
                    for (unsigned char i_6 = 2; i_6 < 24; i_6 += 4) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned long long int) (((_Bool)1) ? ((+(((/* implicit */int) var_10)))) : (((/* implicit */int) arr_12 [i_6 + 1] [(short)2] [(short)2] [0LL] [i_6] [(short)2]))));
                            arr_19 [i_0] [i_5] [i_0] [11U] [i_3] [i_0] = ((/* implicit */unsigned int) ((arr_9 [i_6 - 1]) ? (((/* implicit */int) arr_9 [i_6 - 2])) : (((/* implicit */int) arr_9 [i_6 - 2]))));
                            arr_20 [12ULL] [i_0] [i_4] [6ULL] [21] = ((/* implicit */unsigned char) arr_13 [i_0]);
                        }
                    } 
                } 
            }
            var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((((/* implicit */int) arr_10 [0LL] [i_3] [0LL])) - (((/* implicit */int) arr_10 [i_0] [i_0] [(_Bool)1])))))));
            var_20 = ((/* implicit */long long int) (+(((/* implicit */int) arr_10 [i_0] [i_0] [i_0]))));
        }
        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))))) ? (((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_0] [i_0])) : ((-(((/* implicit */int) (_Bool)1))))));
        /* LoopSeq 2 */
        for (short i_7 = 1; i_7 < 24; i_7 += 1) 
        {
            var_22 ^= -6331068963263923159LL;
            var_23 = ((/* implicit */short) (~(((/* implicit */int) arr_4 [i_0] [i_7 + 1] [i_7]))));
        }
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            var_24 ^= ((/* implicit */unsigned int) (-(((/* implicit */int) arr_10 [i_0] [i_8] [(unsigned short)22]))));
            var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_0] [i_8])) ? (var_7) : (((/* implicit */int) (unsigned short)27219))));
            /* LoopSeq 2 */
            for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
            {
                var_26 ^= ((/* implicit */long long int) var_0);
                var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) (~(1076432172U))))));
                /* LoopNest 2 */
                for (unsigned char i_10 = 1; i_10 < 24; i_10 += 1) 
                {
                    for (int i_11 = 0; i_11 < 25; i_11 += 1) 
                    {
                        {
                            var_28 = ((/* implicit */_Bool) var_5);
                            var_29 = ((/* implicit */int) (!(((/* implicit */_Bool) -2118716727939213273LL))));
                        }
                    } 
                } 
                var_30 = ((arr_29 [i_0] [i_0] [i_9 - 1]) & (((/* implicit */long long int) var_2)));
            }
            for (unsigned long long int i_12 = 0; i_12 < 25; i_12 += 4) 
            {
                arr_40 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_31 [i_12] [i_12] [(signed char)2] [i_12] [i_0] [i_8]))));
                var_31 = ((/* implicit */unsigned long long int) arr_1 [i_0] [i_8]);
                var_32 += ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) arr_9 [i_12])));
            }
        }
    }
    /* vectorizable */
    for (signed char i_13 = 0; i_13 < 25; i_13 += 3) /* same iter space */
    {
        var_33 = ((unsigned int) ((((/* implicit */_Bool) arr_32 [i_13] [i_13] [(_Bool)1] [(_Bool)1])) ? (((/* implicit */int) (unsigned char)71)) : (((/* implicit */int) var_0))));
        var_34 = ((/* implicit */unsigned int) max((var_34), (345396515U)));
    }
}
