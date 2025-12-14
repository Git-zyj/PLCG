/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223774
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
    var_16 += ((/* implicit */unsigned int) (+(max((((long long int) 8ULL)), (((/* implicit */long long int) max((var_14), (var_12))))))));
    var_17 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_14))));
    /* LoopSeq 3 */
    for (int i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) min((16225015022948523931ULL), (((/* implicit */unsigned long long int) -8161112687950456317LL))));
        arr_3 [i_0] = ((/* implicit */signed char) ((long long int) max(((~(arr_0 [i_0]))), (((/* implicit */unsigned int) ((-1520929811) & (((/* implicit */int) (short)0))))))));
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                for (unsigned short i_3 = 0; i_3 < 18; i_3 += 4) 
                {
                    {
                        arr_11 [i_0 + 1] [i_0 + 1] [i_0] = ((/* implicit */unsigned long long int) (+(var_4)));
                        /* LoopSeq 3 */
                        for (short i_4 = 3; i_4 < 14; i_4 += 2) /* same iter space */
                        {
                            var_18 = min((((min((arr_4 [i_3]), ((_Bool)1))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_5 [i_2] [13U]))))) : ((+(var_13))))), (((/* implicit */unsigned long long int) var_10)));
                            var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) min((min((((unsigned long long int) 0ULL)), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-2200))))))), (((/* implicit */unsigned long long int) var_4)))))));
                        }
                        /* vectorizable */
                        for (short i_5 = 3; i_5 < 14; i_5 += 2) /* same iter space */
                        {
                            var_20 -= ((/* implicit */unsigned long long int) ((unsigned int) ((unsigned long long int) var_15)));
                            var_21 = ((/* implicit */unsigned int) ((unsigned long long int) ((int) var_9)));
                            var_22 = ((/* implicit */unsigned int) ((short) (+(arr_13 [i_1] [i_1] [i_2] [i_3] [i_5 + 3] [i_1] [i_5]))));
                        }
                        for (short i_6 = 3; i_6 < 14; i_6 += 2) /* same iter space */
                        {
                            arr_19 [i_0] [i_0] [i_0] [i_3] [i_0] [i_6] = ((/* implicit */unsigned int) var_3);
                            arr_20 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) var_13);
                        }
                        arr_21 [i_3] [i_0] [i_0] [i_0 + 1] = ((/* implicit */unsigned long long int) ((_Bool) (!((!(((/* implicit */_Bool) var_3)))))));
                    }
                } 
            } 
        } 
        var_23 = var_11;
    }
    for (unsigned long long int i_7 = 0; i_7 < 17; i_7 += 2) 
    {
        var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) var_8))));
        var_25 = ((/* implicit */unsigned int) max((var_25), ((-(arr_14 [5U] [i_7] [(short)7] [i_7] [i_7] [5ULL])))));
        /* LoopNest 2 */
        for (unsigned int i_8 = 0; i_8 < 17; i_8 += 1) 
        {
            for (long long int i_9 = 0; i_9 < 17; i_9 += 3) 
            {
                {
                    var_26 &= ((/* implicit */_Bool) ((short) 18446744073709551615ULL));
                    /* LoopSeq 2 */
                    for (unsigned int i_10 = 0; i_10 < 17; i_10 += 2) 
                    {
                        var_27 = ((/* implicit */signed char) var_8);
                        var_28 = ((/* implicit */unsigned long long int) (-((+(((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))))));
                    }
                    for (unsigned int i_11 = 2; i_11 < 16; i_11 += 4) 
                    {
                        arr_39 [i_7] [i_8] [i_7] [i_7] = var_13;
                        var_29 = ((/* implicit */unsigned int) max((((_Bool) (-(((/* implicit */int) var_8))))), (arr_25 [11U] [i_8])));
                    }
                    var_30 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (arr_32 [i_7] [i_7] [i_7] [i_7])))) ? ((-(arr_0 [i_8]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))), (((((18446744073709551615ULL) >= (11052158578165401436ULL))) ? (((/* implicit */unsigned long long int) 2139095040U)) : (18446744073709551609ULL)))));
                }
            } 
        } 
    }
    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_13 = 0; i_13 < 21; i_13 += 2) 
        {
            arr_46 [i_12] [i_12] = 2155872240U;
            var_31 = ((/* implicit */long long int) ((unsigned int) var_3));
            var_32 = ((/* implicit */unsigned int) (+(558120349983830133LL)));
            /* LoopNest 3 */
            for (unsigned short i_14 = 0; i_14 < 21; i_14 += 2) 
            {
                for (short i_15 = 2; i_15 < 17; i_15 += 3) 
                {
                    for (long long int i_16 = 1; i_16 < 18; i_16 += 1) 
                    {
                        {
                            var_33 = ((/* implicit */short) (-(var_9)));
                            var_34 = ((/* implicit */_Bool) max((var_34), (((/* implicit */_Bool) var_9))));
                        }
                    } 
                } 
            } 
            var_35 = ((/* implicit */unsigned int) (_Bool)1);
        }
        arr_56 [i_12] = ((/* implicit */unsigned int) max((((((/* implicit */int) arr_52 [13LL] [i_12] [i_12])) << (1ULL))), (((/* implicit */int) ((signed char) (+(((/* implicit */int) arr_52 [i_12] [i_12] [i_12]))))))));
    }
    var_36 *= ((/* implicit */_Bool) min((((/* implicit */int) (_Bool)1)), ((+(((/* implicit */int) ((_Bool) 2762483628U)))))));
}
