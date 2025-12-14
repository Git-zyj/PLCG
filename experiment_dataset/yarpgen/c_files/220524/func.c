/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220524
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            var_16 ^= ((/* implicit */_Bool) (+(min((((/* implicit */int) (unsigned short)44638)), (((int) var_11))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (short i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                arr_6 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)57))) | (var_3)));
                var_17 = ((/* implicit */unsigned long long int) var_13);
                var_18 = ((/* implicit */_Bool) ((var_2) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_12))));
            }
            /* LoopNest 2 */
            for (unsigned char i_3 = 0; i_3 < 11; i_3 += 1) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        var_19 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)75))))), ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-77))) : (10771324715543233921ULL)))))) ? (((/* implicit */int) var_6)) : ((~(((/* implicit */int) var_14))))));
                        var_20 = min((((((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) >> (((/* implicit */int) var_7))))) < (var_1))), (((((/* implicit */unsigned int) ((/* implicit */int) var_12))) <= (var_15))));
                    }
                } 
            } 
        }
        var_21 -= ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */int) (unsigned char)0)) * (((/* implicit */int) var_13)))), (((/* implicit */int) var_8))))) || (((/* implicit */_Bool) ((unsigned short) min((((/* implicit */unsigned int) var_10)), (var_11)))))));
    }
    /* LoopSeq 1 */
    for (int i_5 = 0; i_5 < 22; i_5 += 4) 
    {
        /* LoopNest 2 */
        for (signed char i_6 = 1; i_6 < 19; i_6 += 3) 
        {
            for (signed char i_7 = 0; i_7 < 22; i_7 += 2) 
            {
                {
                    /* LoopSeq 4 */
                    for (unsigned short i_8 = 0; i_8 < 22; i_8 += 1) 
                    {
                        var_22 -= ((/* implicit */signed char) ((var_9) ? (((/* implicit */int) (unsigned char)13)) : (max(((+(((/* implicit */int) var_10)))), ((~(((/* implicit */int) var_2))))))));
                        var_23 = ((/* implicit */long long int) ((short) ((signed char) ((short) 2909400429773372991LL))));
                        /* LoopSeq 1 */
                        for (unsigned short i_9 = 1; i_9 < 21; i_9 += 1) 
                        {
                            var_24 ^= ((/* implicit */unsigned char) max((max((((/* implicit */unsigned long long int) (signed char)-59)), (var_1))), (((/* implicit */unsigned long long int) var_6))));
                            var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) ((_Bool) max((var_1), (((/* implicit */unsigned long long int) -6600374664900115352LL))))))));
                            arr_27 [i_5] [i_6 + 3] [i_7] [i_9] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((8796800390130316941ULL), (((/* implicit */unsigned long long int) -5589014277398193559LL))))) ? (((((((/* implicit */int) (signed char)65)) - (((/* implicit */int) var_14)))) - (((/* implicit */int) var_0)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))));
                        }
                    }
                    for (long long int i_10 = 2; i_10 < 21; i_10 += 1) 
                    {
                        var_26 -= ((/* implicit */long long int) ((((long long int) var_4)) == (((/* implicit */long long int) (-(((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)0)))))))));
                        var_27 ^= ((/* implicit */unsigned long long int) var_7);
                    }
                    /* vectorizable */
                    for (short i_11 = 1; i_11 < 21; i_11 += 2) 
                    {
                        var_28 -= ((/* implicit */unsigned long long int) ((var_9) && (((/* implicit */_Bool) -7237840274830346072LL))));
                        arr_33 [i_5] [i_7] = ((/* implicit */unsigned short) -1076897918);
                    }
                    /* vectorizable */
                    for (short i_12 = 0; i_12 < 22; i_12 += 4) 
                    {
                        var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)253)) >= (((/* implicit */int) (_Bool)1))))) - (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) == (7955420409013534496ULL))))));
                        var_30 = ((/* implicit */long long int) ((short) 10491323664696017110ULL));
                        var_31 ^= ((/* implicit */signed char) (~(var_15)));
                    }
                    var_32 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) min((var_3), (((/* implicit */unsigned long long int) var_13))))) || ((!(((/* implicit */_Bool) var_0))))))) < (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)23639))) <= (var_1))))));
                }
            } 
        } 
        var_33 -= ((/* implicit */unsigned int) (unsigned char)3);
        arr_38 [i_5] [i_5] = ((/* implicit */unsigned short) var_14);
    }
    var_34 = ((/* implicit */short) max(((!(((/* implicit */_Bool) -517147154)))), ((!(((/* implicit */_Bool) max((((/* implicit */int) var_2)), (-158246731))))))));
}
