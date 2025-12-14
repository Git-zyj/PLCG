/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29667
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
    var_18 = ((/* implicit */long long int) (+(((/* implicit */int) (signed char)-73))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 3) /* same iter space */
    {
        var_19 = ((/* implicit */signed char) 3217023563592858584ULL);
        var_20 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_17))));
        var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 15229720510116693026ULL)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (signed char)87)))))));
        arr_3 [i_0] [i_0] = ((/* implicit */short) ((int) 683224513303391601LL));
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_22 &= ((/* implicit */short) 11974906298940698095ULL);
            arr_6 [i_1] = (-(-4098975655617803673LL));
            var_23 = ((/* implicit */unsigned char) var_7);
        }
        for (unsigned int i_2 = 0; i_2 < 22; i_2 += 3) 
        {
            var_24 = (+(((long long int) 3217023563592858590ULL)));
            arr_11 [i_0] [i_2] [i_2] = (-(3217023563592858603ULL));
            /* LoopSeq 2 */
            for (unsigned long long int i_3 = 1; i_3 < 18; i_3 += 1) 
            {
                var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) var_0))));
                var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0] [i_2] [i_0] [i_3 + 4]))) : (10915633453622859362ULL))))));
            }
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                var_27 -= ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)10542))));
                arr_18 [i_2] = ((/* implicit */unsigned int) 7531110620086692260ULL);
                /* LoopNest 2 */
                for (long long int i_5 = 0; i_5 < 22; i_5 += 3) 
                {
                    for (long long int i_6 = 0; i_6 < 22; i_6 += 3) 
                    {
                        {
                            arr_24 [(_Bool)1] &= ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-79)) ? (((/* implicit */int) arr_2 [i_5])) : (((/* implicit */int) arr_17 [i_2] [i_5] [i_6]))));
                            var_28 ^= ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_1 [i_4]))));
                        }
                    } 
                } 
                var_29 = ((((((/* implicit */_Bool) arr_21 [i_2] [i_2])) && (((/* implicit */_Bool) var_9)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_15))) + (5968797796343574376LL)))) : (((10915633453622859362ULL) & (((/* implicit */unsigned long long int) var_0)))));
                arr_25 [i_4] [i_2] [i_2] [i_0] = ((/* implicit */long long int) (_Bool)1);
            }
            var_30 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned long long int) arr_14 [i_0] [i_0] [9LL] [i_0])))));
            arr_26 [i_2] = ((/* implicit */signed char) ((long long int) (signed char)68));
        }
    }
    for (unsigned int i_7 = 0; i_7 < 22; i_7 += 3) /* same iter space */
    {
        var_31 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_1))));
        var_32 *= ((/* implicit */short) (unsigned short)30835);
        var_33 = max((3217023563592858590ULL), (((/* implicit */unsigned long long int) (_Bool)1)));
        var_34 = ((((/* implicit */long long int) ((int) -1099511627776LL))) % ((-9223372036854775807LL - 1LL)));
        var_35 = ((/* implicit */short) min((var_35), (((/* implicit */short) arr_10 [(_Bool)1]))));
    }
    /* vectorizable */
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        var_36 -= ((/* implicit */long long int) (((~(var_11))) <= (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_8])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_10 [(_Bool)1])))))));
        var_37 = ((/* implicit */long long int) var_17);
        var_38 = ((/* implicit */unsigned long long int) var_5);
        var_39 = ((((/* implicit */int) arr_17 [i_8] [i_8] [i_8])) != (arr_28 [i_8]));
    }
}
