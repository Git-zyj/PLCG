/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228337
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228337 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228337
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
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) || ((!(var_16)))));
    /* LoopSeq 4 */
    for (long long int i_0 = 1; i_0 < 11; i_0 += 2) /* same iter space */
    {
        var_20 = ((/* implicit */short) max((-553823574065443174LL), (((/* implicit */long long int) (!(((/* implicit */_Bool) (-(var_18)))))))));
        /* LoopSeq 2 */
        for (long long int i_1 = 2; i_1 < 12; i_1 += 3) 
        {
            var_21 = ((/* implicit */_Bool) max((var_18), ((-(((((/* implicit */unsigned int) ((/* implicit */int) (short)16384))) % (var_15)))))));
            var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) max(((((+(arr_3 [(_Bool)1]))) / (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)6))))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)80)))))))))))));
            var_23 = ((/* implicit */int) (~(((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */unsigned int) -354169886)) : (((var_15) * (((/* implicit */unsigned int) ((/* implicit */int) (short)-5703)))))))));
        }
        for (int i_2 = 0; i_2 < 13; i_2 += 3) 
        {
            var_24 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -354169864)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (short)-23393))))) ? (arr_6 [i_0]) : (var_8)))), (((max((var_15), (((/* implicit */unsigned int) var_2)))) * (((/* implicit */unsigned int) min((354169886), (((/* implicit */int) var_7)))))))));
            var_25 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_5))));
            var_26 = ((/* implicit */short) ((((/* implicit */_Bool) min((min(((short)5703), (((/* implicit */short) arr_2 [i_0] [i_0] [i_0])))), (((/* implicit */short) arr_0 [i_0]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_6 [i_0]), (((/* implicit */int) (signed char)-1))))) ? (((var_15) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))))) : (((/* implicit */unsigned int) arr_6 [i_0]))))) : (min((((/* implicit */unsigned long long int) (short)-5714)), (144115188075855808ULL)))));
        }
    }
    for (long long int i_3 = 1; i_3 < 11; i_3 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (long long int i_4 = 0; i_4 < 13; i_4 += 2) 
        {
            for (unsigned int i_5 = 2; i_5 < 12; i_5 += 2) 
            {
                {
                    arr_16 [10] [i_3] [i_4] [i_5] = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_4 [i_5 - 2])), (1518284173U))))));
                    arr_17 [i_3] [i_4] [i_5] [i_3] = ((/* implicit */signed char) max((((/* implicit */unsigned int) (+(((795479290) + (((/* implicit */int) (unsigned char)239))))))), ((-(((((/* implicit */_Bool) 1207483004)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (3584U)))))));
                    arr_18 [i_3] [i_4] [i_5] = ((/* implicit */unsigned long long int) var_9);
                    var_27 = ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (unsigned short)54759)) : (var_3)))), (max((((/* implicit */unsigned int) (signed char)-11)), (var_5)))))) ? (var_1) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((short) var_2)))))));
                    var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) min((((((/* implicit */int) (signed char)-18)) * ((-(((/* implicit */int) (unsigned char)178)))))), (((/* implicit */int) var_16)))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned char i_6 = 0; i_6 < 13; i_6 += 4) 
        {
            for (unsigned int i_7 = 1; i_7 < 12; i_7 += 3) 
            {
                for (unsigned long long int i_8 = 0; i_8 < 13; i_8 += 4) 
                {
                    {
                        var_29 = ((/* implicit */signed char) arr_22 [i_3] [i_7] [i_3]);
                        arr_27 [i_3 + 1] [(unsigned short)10] [i_3] [i_3] = ((((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned char)16)) ? (((/* implicit */int) (unsigned char)173)) : (1761550485))) >> (((((/* implicit */int) max((((/* implicit */unsigned char) var_16)), (arr_26 [i_3] [i_3] [i_6] [i_6] [i_7] [i_8])))) - (132)))))) ^ (min((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)99))))), (max((((/* implicit */unsigned int) (signed char)30)), (var_15))))));
                        arr_28 [(unsigned char)2] [i_6] [i_3] [i_6] [i_8] = ((/* implicit */long long int) max((((((((/* implicit */unsigned long long int) 884354986U)) * (10ULL))) ^ (((((/* implicit */_Bool) (unsigned short)11126)) ? (((/* implicit */unsigned long long int) 354169892)) : (18076877655087863411ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -354169892)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_4))))) ? ((-(((/* implicit */int) (unsigned char)0)))) : (((/* implicit */int) var_4)))))));
                    }
                } 
            } 
        } 
        arr_29 [i_3] = ((/* implicit */long long int) ((((/* implicit */int) (signed char)5)) * (((((/* implicit */int) min((arr_13 [i_3] [i_3]), (((/* implicit */unsigned short) (signed char)-11))))) - ((-(((/* implicit */int) var_4))))))));
        arr_30 [i_3] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_3 + 1])))))) + (max((1055531162664960ULL), (((/* implicit */unsigned long long int) (signed char)26))))));
    }
    for (signed char i_9 = 1; i_9 < 24; i_9 += 4) /* same iter space */
    {
        arr_34 [i_9] = ((/* implicit */short) max((max((((/* implicit */unsigned int) ((((((/* implicit */int) (signed char)-9)) + (2147483647))) >> (((/* implicit */int) (signed char)10))))), (3637556424U))), (((/* implicit */unsigned int) (~((~(((/* implicit */int) (unsigned short)0)))))))));
        arr_35 [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(max((((/* implicit */long long int) var_11)), (1152921504606846968LL)))))) ? (arr_32 [i_9 - 1]) : (((/* implicit */long long int) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) (signed char)29)) : (((/* implicit */int) (unsigned char)15)))))));
        var_30 = ((/* implicit */long long int) (((((~(arr_31 [i_9]))) >= (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))) ? (max((((/* implicit */unsigned long long int) max((var_3), (((/* implicit */int) arr_33 [i_9]))))), (max((((/* implicit */unsigned long long int) 8180876270105446491LL)), (536870912ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((var_2) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_4)))) == (((int) (signed char)32))))))));
    }
    for (signed char i_10 = 1; i_10 < 24; i_10 += 4) /* same iter space */
    {
        var_31 = ((/* implicit */unsigned long long int) max((var_31), (((/* implicit */unsigned long long int) (+(((/* implicit */int) max((arr_37 [i_10 + 1]), (arr_37 [i_10 + 1])))))))));
        arr_40 [i_10] = ((/* implicit */unsigned long long int) (!(((354169886) < (-2045253786)))));
        var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((-1404613465), (((/* implicit */int) var_0))))) ? (min((1517840853859753522LL), (((/* implicit */long long int) var_2)))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)35)))))) ? (((((/* implicit */unsigned long long int) -354169886)) % (min((16760020061200040033ULL), (((/* implicit */unsigned long long int) var_17)))))) : (max((((((/* implicit */_Bool) 2126755117U)) ? (((/* implicit */unsigned long long int) var_8)) : (12288ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (2629435197U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_37 [i_10]))))))))));
    }
    var_33 ^= ((/* implicit */signed char) var_7);
}
