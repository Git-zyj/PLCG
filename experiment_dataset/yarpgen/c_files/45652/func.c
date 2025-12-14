/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45652
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
    var_15 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) var_10)))) ? ((~(((((/* implicit */_Bool) (unsigned short)0)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)240))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 2; i_0 < 17; i_0 += 3) 
    {
        var_16 -= ((/* implicit */signed char) (short)252);
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 19; i_1 += 1) /* same iter space */
        {
            var_17 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 2147483647))));
            /* LoopNest 3 */
            for (short i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 3; i_3 < 16; i_3 += 2) 
                {
                    for (short i_4 = 0; i_4 < 19; i_4 += 2) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) : (((/* implicit */int) ((((/* implicit */int) (signed char)10)) <= (((/* implicit */int) var_6))))))) | (((/* implicit */int) (!((!(((/* implicit */_Bool) (unsigned short)260)))))))));
                            var_19 += ((/* implicit */_Bool) 2147483647);
                            arr_10 [i_0] [i_1] [i_0] [i_0] [i_4] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)96))) != (5777119109921075374ULL)));
                            arr_11 [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) (((-2147483647 - 1)) / (((/* implicit */int) var_10))))) ? (-1) : (((/* implicit */int) ((short) (!(((/* implicit */_Bool) (unsigned short)240))))))));
                            var_20 = ((/* implicit */unsigned short) var_5);
                        }
                    } 
                } 
            } 
        }
        for (long long int i_5 = 0; i_5 < 19; i_5 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned long long int i_6 = 0; i_6 < 19; i_6 += 3) 
            {
                for (short i_7 = 0; i_7 < 19; i_7 += 3) 
                {
                    for (unsigned long long int i_8 = 0; i_8 < 19; i_8 += 2) 
                    {
                        {
                            var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) (!(((/* implicit */_Bool) 1023ULL)))))));
                            var_22 = ((/* implicit */unsigned char) (-(max((3440423373U), (((/* implicit */unsigned int) (unsigned char)255))))));
                            var_23 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)167)) ? (((/* implicit */int) (signed char)74)) : (((/* implicit */int) (signed char)-77))));
                            var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) (((-2147483647 - 1)) > (((/* implicit */int) ((unsigned short) ((((/* implicit */int) var_0)) - (((/* implicit */int) var_10)))))))))));
                            var_25 = ((/* implicit */_Bool) max(((~(((/* implicit */int) (!((_Bool)1)))))), (((var_5) ? (((/* implicit */int) (unsigned short)64607)) : (392182254)))));
                        }
                    } 
                } 
            } 
            var_26 -= ((12669624963788476241ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) (unsigned short)44419)) : (((/* implicit */int) var_5))))))));
        }
    }
    /* vectorizable */
    for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
    {
        arr_24 [i_9 + 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) 1362860705)) : (5777119109921075374ULL)));
        arr_25 [i_9 + 1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) + (15550907069539537496ULL)));
        var_27 = ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) -859905192)) ? (((/* implicit */int) (short)-1)) : (-392182254))));
    }
    var_28 = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 15550907069539537489ULL)) ? (((/* implicit */int) (short)27179)) : (((/* implicit */int) (short)32752)))))))));
}
