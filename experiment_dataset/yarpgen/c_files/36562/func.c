/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36562
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
    var_12 = ((/* implicit */unsigned int) (-(((/* implicit */int) (short)14398))));
    var_13 = ((/* implicit */signed char) var_4);
    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) ((var_8) ? (var_2) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_0))))))))) ? (((var_8) ? (((((/* implicit */_Bool) -1951864475)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_7)))) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((((/* implicit */_Bool) min((var_3), (((/* implicit */unsigned long long int) 1073741824))))) || (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)43871))) >= (var_6))))))));
    /* LoopSeq 4 */
    for (signed char i_0 = 3; i_0 < 22; i_0 += 2) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) >= ((~(var_4))))) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (min((((/* implicit */long long int) ((unsigned short) arr_1 [i_0] [i_0 - 1]))), (((arr_0 [i_0]) ? (var_1) : (3298534883328LL)))))));
        var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_7))))) * ((+(3298534883328LL)))))) ? (((((unsigned long long int) 3298534883329LL)) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))))) : (((/* implicit */unsigned long long int) -5065609700595387841LL))));
    }
    for (signed char i_1 = 3; i_1 < 22; i_1 += 2) /* same iter space */
    {
        arr_7 [i_1] = ((/* implicit */unsigned int) arr_1 [i_1] [i_1]);
        arr_8 [i_1] = ((/* implicit */unsigned long long int) arr_3 [i_1]);
        arr_9 [i_1] = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) arr_3 [i_1])) ? (arr_5 [(signed char)17] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1]))))));
    }
    for (signed char i_2 = 3; i_2 < 22; i_2 += 2) /* same iter space */
    {
        var_16 *= ((/* implicit */_Bool) -5065609700595387841LL);
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_3 = 2; i_3 < 22; i_3 += 2) 
        {
            arr_16 [i_2 - 1] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) 9223372036854775807LL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)27430))))) : (((/* implicit */int) (unsigned short)40557))));
            /* LoopNest 2 */
            for (unsigned char i_4 = 0; i_4 < 24; i_4 += 1) 
            {
                for (short i_5 = 1; i_5 < 23; i_5 += 4) 
                {
                    {
                        arr_24 [i_5] [i_3] [i_3] [i_4] = ((/* implicit */unsigned short) var_10);
                        arr_25 [i_2 + 1] [i_2 + 1] [3LL] [i_5] [i_2 + 1] [i_5] = ((/* implicit */unsigned short) (~(arr_21 [i_2] [i_3] [i_4] [i_2] [i_5] [i_4])));
                    }
                } 
            } 
        }
    }
    for (unsigned int i_6 = 0; i_6 < 15; i_6 += 3) 
    {
        /* LoopSeq 2 */
        for (signed char i_7 = 0; i_7 < 15; i_7 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
            {
                for (int i_9 = 0; i_9 < 15; i_9 += 4) 
                {
                    {
                        var_17 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_28 [i_6]))));
                        var_18 ^= ((/* implicit */unsigned int) (_Bool)1);
                        var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) var_8))) ? (((/* implicit */int) ((982990735U) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)53024)))))) : (((((/* implicit */int) var_7)) ^ (((/* implicit */int) max((var_5), ((signed char)19))))))));
                        arr_37 [i_6] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) (unsigned char)247)), ((short)-31586))))) - (arr_6 [i_6])));
                        arr_38 [i_6] [(unsigned short)3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_20 [i_6] [i_8] [i_8])) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_9])))))))) ? ((((+(5065609700595387841LL))) << (((((((/* implicit */_Bool) arr_10 [i_6])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (short)31571)))) - (122))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_9] [i_7] [(unsigned char)9]))) : (3869886847U))))))))));
                    }
                } 
            } 
            arr_39 [i_6] [3LL] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-1))))) ? (5065609700595387841LL) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))) * (((((/* implicit */_Bool) arr_33 [i_6])) ? (var_2) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_35 [i_6] [14LL] [i_7] [i_6] [14LL]))) | (2733450668647516688LL))))))));
            arr_40 [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_30 [i_6] [i_6] [i_7]))))) ? (634082316) : (((/* implicit */int) (!(((/* implicit */_Bool) (~(2980927113U)))))))));
        }
        for (signed char i_10 = 0; i_10 < 15; i_10 += 2) /* same iter space */
        {
            var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)8192)) ? (((/* implicit */unsigned int) ((/* implicit */int) min((arr_41 [i_6] [i_6] [i_6]), (max((((/* implicit */unsigned short) var_7)), ((unsigned short)41141))))))) : ((-((-(var_4)))))));
            var_21 = (_Bool)0;
        }
        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_6])) ? (var_6) : (((/* implicit */long long int) -634082345))))) : (arr_15 [(short)0]))))));
    }
}
