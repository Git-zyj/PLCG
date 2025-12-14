/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39468
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39468 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39468
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
    var_10 = ((/* implicit */unsigned char) (unsigned short)38097);
    var_11 = ((/* implicit */short) ((long long int) ((signed char) ((((/* implicit */int) var_3)) + (((/* implicit */int) (short)7933))))));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        var_12 = ((/* implicit */unsigned short) var_2);
        var_13 -= ((/* implicit */unsigned short) ((unsigned int) min((((((/* implicit */_Bool) -11)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (8LL))), (((/* implicit */long long int) ((unsigned char) var_6))))));
    }
    for (unsigned long long int i_1 = 4; i_1 < 20; i_1 += 2) 
    {
        var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((unsigned long long int) arr_3 [i_1 - 2]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) == (((unsigned long long int) (signed char)0)))))) : ((+((~(1419012659990208179ULL)))))));
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 21; i_2 += 2) 
        {
            for (int i_3 = 0; i_3 < 21; i_3 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_4 = 0; i_4 < 21; i_4 += 4) 
                    {
                        var_15 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-52))) & (((long long int) var_2))));
                        var_16 -= ((/* implicit */long long int) ((unsigned char) (~(((/* implicit */int) var_1)))));
                        var_17 -= ((/* implicit */short) 15907374004630533067ULL);
                        var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) arr_2 [i_2]))) ? (((((/* implicit */_Bool) arr_8 [i_3] [i_4] [i_1])) ? (arr_6 [i_3] [i_2] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) (short)22625))))))) ? (((arr_5 [i_1 - 2] [i_1 - 2]) ? (((/* implicit */int) arr_5 [i_1 - 2] [i_1 - 4])) : (((/* implicit */int) arr_5 [i_1 + 1] [i_1 - 4])))) : (((/* implicit */int) ((_Bool) var_1))))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 21; i_5 += 4) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 21; i_6 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) arr_4 [i_1 - 4])) ? (((/* implicit */int) var_1)) : (arr_13 [i_1] [i_1 - 2] [i_1 - 1] [i_1 + 1] [i_1 - 4] [i_1 - 4])))))));
                                var_20 = ((/* implicit */int) 5573003675374800589LL);
                                var_21 = ((signed char) var_4);
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (unsigned short)0)), ((~((+(7358155013735564263ULL)))))));
                    var_23 = ((/* implicit */unsigned short) (~(2097151ULL)));
                }
            } 
        } 
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            var_24 += ((/* implicit */_Bool) ((unsigned char) ((6399628927901861473LL) <= (((/* implicit */long long int) ((/* implicit */int) var_8))))));
            var_25 = ((/* implicit */unsigned long long int) ((short) (+(((/* implicit */int) var_8)))));
            var_26 = arr_18 [i_7];
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 21; i_8 += 2) 
            {
                for (long long int i_9 = 0; i_9 < 21; i_9 += 4) 
                {
                    {
                        var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_14 [i_1 + 1])) ? (arr_14 [i_1 - 3]) : (arr_14 [i_1 - 1])));
                        var_28 = ((/* implicit */short) (~(((/* implicit */int) var_0))));
                    }
                } 
            } 
            var_29 = ((/* implicit */unsigned long long int) arr_19 [i_1] [i_7]);
        }
    }
    for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
    {
        var_30 |= var_4;
        var_31 = ((/* implicit */long long int) (~(((/* implicit */int) min((var_3), (((/* implicit */unsigned short) arr_20 [i_10 - 1] [i_10] [i_10 - 1])))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_11 = 0; i_11 < 19; i_11 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_12 = 2; i_12 < 18; i_12 += 2) 
            {
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    {
                        var_32 |= ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (((unsigned int) arr_4 [i_11])) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
                        var_33 = ((/* implicit */long long int) var_9);
                        var_34 = ((/* implicit */unsigned short) max((var_34), (((/* implicit */unsigned short) (+(0U))))));
                        /* LoopSeq 2 */
                        for (unsigned char i_14 = 3; i_14 < 17; i_14 += 4) 
                        {
                            var_35 = ((/* implicit */long long int) (~((~(((/* implicit */int) var_0))))));
                            var_36 = ((/* implicit */long long int) ((unsigned short) 11088589059973987352ULL));
                            var_37 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned int) var_7)))));
                            var_38 = ((/* implicit */short) ((signed char) var_7));
                        }
                        for (signed char i_15 = 0; i_15 < 19; i_15 += 4) 
                        {
                            var_39 = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) (unsigned char)112)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_22 [i_10 - 1] [i_13] [i_11])))));
                            var_40 = ((/* implicit */signed char) ((unsigned long long int) var_7));
                            var_41 = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) arr_28 [i_12 - 2] [i_15])) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))));
                        }
                        var_42 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) 11088589059973987352ULL))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))) : (var_9)))) : (arr_17 [i_10 - 1])));
                    }
                } 
            } 
            var_43 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_3))))) ? (arr_26 [i_10 - 1]) : (((/* implicit */unsigned long long int) ((long long int) (_Bool)0)))));
            var_44 = ((/* implicit */unsigned long long int) min((var_44), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_25 [i_10 - 1])) ? (((/* implicit */int) (unsigned short)60732)) : (arr_25 [i_10 - 1]))))));
            var_45 = ((/* implicit */unsigned long long int) ((unsigned short) arr_28 [i_11] [i_11]));
            var_46 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_33 [i_10 - 1] [i_11] [i_11] [i_10 - 1]))));
        }
        var_47 = ((/* implicit */long long int) ((15970594594325536817ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
    }
    var_48 = ((/* implicit */long long int) var_9);
}
