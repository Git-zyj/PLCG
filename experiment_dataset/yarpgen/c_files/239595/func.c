/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239595
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
    var_10 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */int) (short)5728)) > (((/* implicit */int) (short)5728)))))) ? (((/* implicit */int) var_4)) : (max(((~(((/* implicit */int) (short)-27659)))), (((/* implicit */int) (unsigned short)45243))))));
    var_11 = ((/* implicit */signed char) 15389082404795576050ULL);
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 15; i_0 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_1 = 1; i_1 < 13; i_1 += 4) 
        {
            var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) ((((/* implicit */int) ((short) var_5))) >> ((((-(((/* implicit */int) (short)5736)))) + (5764))))))));
            /* LoopNest 2 */
            for (short i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                for (unsigned int i_3 = 1; i_3 < 14; i_3 += 3) 
                {
                    {
                        var_13 = ((unsigned char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_3]))) : (6931765683143633347ULL)));
                        var_14 = ((/* implicit */unsigned int) (-(((2843370490655156130LL) / (arr_5 [i_3 - 1] [i_2] [i_1])))));
                        arr_10 [i_0] [i_2] = ((short) arr_0 [i_0] [(unsigned char)10]);
                        arr_11 [i_2] [2] [6U] [i_2] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) arr_1 [i_0] [i_2])) > ((-(var_1)))));
                    }
                } 
            } 
            arr_12 [i_0] = ((/* implicit */unsigned int) ((var_6) + (((/* implicit */long long int) ((/* implicit */int) var_7)))));
            var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_0]))) : (var_1)));
        }
        /* vectorizable */
        for (unsigned int i_4 = 4; i_4 < 13; i_4 += 1) 
        {
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 15; i_5 += 3) 
            {
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    {
                        var_16 *= ((/* implicit */unsigned int) var_8);
                        var_17 = ((unsigned long long int) arr_17 [i_4 + 2] [i_4] [i_4] [i_0]);
                        arr_22 [i_4] [i_4] = ((/* implicit */long long int) (~(arr_7 [i_0] [i_4 - 4] [i_4 + 1])));
                    }
                } 
            } 
            var_18 &= ((/* implicit */_Bool) ((((((/* implicit */_Bool) 4294967295U)) ? (4294967295U) : (var_2))) * (((/* implicit */unsigned int) ((/* implicit */int) var_4)))));
            var_19 -= ((/* implicit */unsigned long long int) (short)1024);
            var_20 = ((/* implicit */int) var_9);
        }
        /* LoopNest 3 */
        for (int i_7 = 2; i_7 < 14; i_7 += 3) 
        {
            for (long long int i_8 = 2; i_8 < 13; i_8 += 4) 
            {
                for (short i_9 = 1; i_9 < 14; i_9 += 4) 
                {
                    {
                        arr_30 [i_7] = ((/* implicit */short) ((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((669108875309867097LL) >= (((/* implicit */long long int) ((/* implicit */int) (short)16734)))))), ((-(arr_21 [i_0] [i_0] [i_0] [i_7])))))) + (((unsigned long long int) 7449948890102994761ULL))));
                        var_21 = ((/* implicit */signed char) max((var_1), (((/* implicit */unsigned long long int) var_8))));
                    }
                } 
            } 
        } 
        var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) (short)1023))));
        arr_31 [i_0] = ((unsigned long long int) min(((signed char)-4), ((signed char)15)));
    }
    for (short i_10 = 0; i_10 < 15; i_10 += 4) /* same iter space */
    {
        var_23 ^= ((((int) (-(arr_21 [i_10] [i_10] [i_10] [i_10])))) > (((/* implicit */int) ((((/* implicit */_Bool) arr_17 [i_10] [i_10] [i_10] [i_10])) && (((/* implicit */_Bool) 3355744496U))))));
        var_24 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-65))) < (2656985910U)));
        arr_34 [i_10] |= ((/* implicit */short) (-((-(((/* implicit */int) var_0))))));
        var_25 = ((/* implicit */_Bool) var_3);
    }
    var_26 = ((/* implicit */long long int) var_8);
}
