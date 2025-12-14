/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205417
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
    var_19 = ((/* implicit */unsigned char) var_5);
    var_20 = var_2;
    var_21 = ((/* implicit */signed char) (((-(((((/* implicit */_Bool) var_1)) ? (var_2) : (var_11))))) % (((((/* implicit */_Bool) ((((/* implicit */_Bool) 259903255)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (var_9)))) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_18)))))));
    var_22 = (+(((long long int) var_14)));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 1; i_0 < 20; i_0 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            var_23 = ((/* implicit */int) ((((/* implicit */int) ((unsigned char) 125038908U))) > (((/* implicit */int) (unsigned char)96))));
            /* LoopNest 2 */
            for (unsigned short i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                for (signed char i_3 = 0; i_3 < 21; i_3 += 1) 
                {
                    {
                        var_24 = ((/* implicit */unsigned char) ((((/* implicit */int) ((var_11) > (3852138125U)))) < (((/* implicit */int) (!(((/* implicit */_Bool) 1610612736U)))))));
                        arr_12 [i_0] [i_0] [i_1] [i_1] [i_2] [i_3] = ((/* implicit */short) ((unsigned char) arr_10 [i_0 - 1] [i_0] [i_2] [i_3]));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (unsigned int i_4 = 0; i_4 < 21; i_4 += 3) 
            {
                for (unsigned int i_5 = 1; i_5 < 20; i_5 += 1) 
                {
                    for (signed char i_6 = 0; i_6 < 21; i_6 += 4) 
                    {
                        {
                            var_25 = ((/* implicit */long long int) arr_2 [i_1] [i_0]);
                            var_26 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 3939322746U))));
                            var_27 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_17))))) << (((/* implicit */int) (!(((/* implicit */_Bool) 2783087160U)))))));
                            var_28 *= ((/* implicit */short) var_14);
                        }
                    } 
                } 
            } 
            arr_22 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0 + 1] [i_1]))) : (arr_8 [i_1])));
            var_29 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_14 [i_0] [i_0 - 1] [i_1])) ? (arr_16 [i_0] [i_0] [i_0 + 1] [i_1] [i_1] [i_1]) : (var_3)));
        }
        var_30 += ((/* implicit */unsigned short) ((long long int) ((-846090353) != (((/* implicit */int) (short)32762)))));
    }
    /* vectorizable */
    for (unsigned char i_7 = 1; i_7 < 20; i_7 += 2) /* same iter space */
    {
        arr_26 [i_7] &= (~(var_6));
        var_31 = (-(-2328708815689998941LL));
    }
    for (unsigned int i_8 = 0; i_8 < 21; i_8 += 4) 
    {
        /* LoopNest 2 */
        for (short i_9 = 1; i_9 < 19; i_9 += 1) 
        {
            for (long long int i_10 = 1; i_10 < 20; i_10 += 4) 
            {
                {
                    var_32 = ((/* implicit */signed char) ((((arr_20 [i_9 + 2] [i_9 + 1] [i_10 - 1]) != (((/* implicit */unsigned int) var_5)))) ? (arr_20 [i_9 + 1] [i_9 - 1] [i_10 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned short)40777), (((/* implicit */unsigned short) (signed char)31))))))));
                    var_33 *= ((/* implicit */unsigned int) var_5);
                }
            } 
        } 
        /* LoopNest 2 */
        for (int i_11 = 1; i_11 < 17; i_11 += 1) 
        {
            for (long long int i_12 = 0; i_12 < 21; i_12 += 2) 
            {
                {
                    var_34 = ((/* implicit */short) max((var_34), (((/* implicit */short) ((max((1511880136U), ((+(1986648986U))))) > (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) min((87758546U), (((/* implicit */unsigned int) (short)-29826))))))))))))));
                    arr_38 [i_12] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_2 [i_8] [i_11])))) ? (((((/* implicit */int) (unsigned char)255)) & (((/* implicit */int) arr_14 [i_8] [i_11] [i_12])))) : (1113406835)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_8]))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 125038908U)) ? (-623386860270188894LL) : (((/* implicit */long long int) ((/* implicit */int) (short)19547)))))) ? (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)12))))) : ((+(arr_8 [i_8])))))));
                    var_35 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_18 [i_11 + 2] [i_11] [i_11 + 1] [i_12] [i_12])) : (((/* implicit */int) arr_18 [i_11 + 2] [i_11] [i_11 + 3] [i_12] [i_12])))))));
                    var_36 = ((/* implicit */unsigned int) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_11 - 1]))) + (var_4))) != (((/* implicit */unsigned int) ((/* implicit */int) min((arr_24 [i_11 - 1]), (((/* implicit */short) (signed char)115))))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_13 = 0; i_13 < 21; i_13 += 3) 
        {
            for (signed char i_14 = 0; i_14 < 21; i_14 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_15 = 1; i_15 < 18; i_15 += 3) 
                    {
                        arr_48 [i_8] [i_13] [i_14] [i_15] = ((/* implicit */unsigned char) ((var_9) << (((((/* implicit */int) ((short) 4268435280U))) - (10034)))));
                        var_37 = ((/* implicit */signed char) min((var_37), (((/* implicit */signed char) var_14))));
                    }
                    var_38 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_10 [i_8] [i_13] [i_14] [i_8]))));
                }
            } 
        } 
        var_39 = min((((unsigned int) 1153917009U)), (((/* implicit */unsigned int) min((((unsigned char) arr_8 [i_8])), (((/* implicit */unsigned char) var_17))))));
    }
}
