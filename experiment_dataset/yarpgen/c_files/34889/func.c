/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34889
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
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 16116203765785227612ULL)) ? (((/* implicit */int) (unsigned char)133)) : (((/* implicit */int) (unsigned char)32))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = 404273569248731593ULL;
        arr_4 [(unsigned char)10] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(2250048985U))))));
    }
    for (unsigned short i_1 = 0; i_1 < 17; i_1 += 1) /* same iter space */
    {
        var_21 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((var_13) - (((/* implicit */long long int) var_16))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((2250049006U) | (2044918320U)))) ? (((var_14) & (((/* implicit */unsigned long long int) var_10)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_2 [i_1] [i_1])))))))));
        /* LoopNest 3 */
        for (signed char i_2 = 3; i_2 < 15; i_2 += 3) 
        {
            for (long long int i_3 = 0; i_3 < 17; i_3 += 1) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 1) 
                {
                    {
                        arr_13 [(unsigned short)14] [(unsigned short)14] [i_2] = ((/* implicit */unsigned int) 5113590357765753973ULL);
                        arr_14 [i_2] [i_2] [i_3] [(unsigned short)10] [(unsigned short)10] = ((/* implicit */signed char) var_18);
                        var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? ((~(13333153715943797637ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((-8998907261529108921LL) < (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535)))))))));
                        arr_15 [i_1] [i_2 - 3] [i_3] [(_Bool)0] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) 4294967295U)) : (min((((/* implicit */long long int) ((var_5) / (2250048985U)))), (((((/* implicit */long long int) ((/* implicit */int) (short)-29004))) / (4911544206546043724LL)))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned short i_5 = 0; i_5 < 17; i_5 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned long long int i_6 = 0; i_6 < 17; i_6 += 3) 
        {
            for (unsigned short i_7 = 0; i_7 < 17; i_7 += 3) 
            {
                for (unsigned short i_8 = 1; i_8 < 15; i_8 += 1) 
                {
                    {
                        arr_27 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned long long int) var_7);
                        var_23 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_5] [i_5])) ? (((/* implicit */int) arr_12 [i_5] [i_6] [i_6] [i_6] [i_6] [i_6])) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_25 [i_8 + 1] [i_5] [i_5] [i_8 + 1])) : (((/* implicit */int) ((((/* implicit */_Bool) 2714922532U)) && (((/* implicit */_Bool) var_2))))))), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_6])) % (((/* implicit */int) arr_0 [i_6]))))))))));
                        var_24 = ((/* implicit */unsigned short) min(((-(arr_1 [i_8 - 1]))), ((+(((/* implicit */int) ((((/* implicit */_Bool) -5761171293703715001LL)) || (((/* implicit */_Bool) 2228023445U)))))))));
                    }
                } 
            } 
        } 
        var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) (((!(((/* implicit */_Bool) (unsigned short)0)))) || (((((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_5] [i_5] [4ULL] [i_5] [i_5] [i_5]))) <= (((2066943850U) % (((/* implicit */unsigned int) ((/* implicit */int) (short)12521))))))))))));
        arr_28 [16ULL] &= ((/* implicit */signed char) (+(((/* implicit */int) (_Bool)0))));
        var_26 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)14022)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65532))) : (2199023255552LL)));
    }
}
