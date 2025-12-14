/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218972
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
    var_18 -= ((/* implicit */short) ((unsigned long long int) var_10));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_19 = ((/* implicit */long long int) max((min((max((var_7), (((/* implicit */unsigned long long int) var_3)))), (min((var_16), (((/* implicit */unsigned long long int) var_8)))))), (max((var_16), (((/* implicit */unsigned long long int) ((unsigned int) var_11)))))));
        var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((max((((/* implicit */unsigned long long int) ((_Bool) var_14))), (((unsigned long long int) var_1)))) + (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) min((var_2), (((/* implicit */unsigned char) var_1))))), (((unsigned short) var_6)))))))))));
    }
    for (unsigned long long int i_1 = 2; i_1 < 7; i_1 += 2) 
    {
        /* LoopSeq 3 */
        for (signed char i_2 = 0; i_2 < 10; i_2 += 2) 
        {
            var_21 |= ((/* implicit */long long int) ((short) min((((/* implicit */unsigned int) max((var_3), (((/* implicit */unsigned short) var_14))))), (((unsigned int) var_3)))));
            var_22 += ((/* implicit */unsigned int) ((unsigned short) (unsigned short)65535));
            arr_8 [i_1 - 2] [i_1 - 2] &= ((/* implicit */unsigned char) ((long long int) (_Bool)0));
        }
        for (unsigned char i_3 = 0; i_3 < 10; i_3 += 2) 
        {
            arr_12 [i_3] |= ((/* implicit */unsigned long long int) min(((unsigned short)38100), (((/* implicit */unsigned short) ((signed char) (unsigned short)27435)))));
            arr_13 [i_1] |= ((/* implicit */unsigned int) min((((/* implicit */int) min((max(((unsigned short)38100), (((/* implicit */unsigned short) (unsigned char)154)))), (((/* implicit */unsigned short) ((_Bool) var_3)))))), (((((/* implicit */int) min((((/* implicit */short) var_4)), (var_14)))) + (((/* implicit */int) max((((/* implicit */short) var_4)), (var_17))))))));
            var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) ((var_11) * (((/* implicit */unsigned long long int) ((long long int) var_0))))))));
            var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) min((((unsigned char) ((var_9) - (((/* implicit */long long int) ((/* implicit */int) var_6)))))), (min((((/* implicit */unsigned char) var_10)), (var_15))))))));
        }
        for (unsigned short i_4 = 0; i_4 < 10; i_4 += 2) 
        {
            /* LoopNest 2 */
            for (long long int i_5 = 3; i_5 < 7; i_5 += 1) 
            {
                for (int i_6 = 2; i_6 < 8; i_6 += 3) 
                {
                    {
                        var_25 |= ((/* implicit */_Bool) var_13);
                        var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) ((long long int) ((((/* implicit */long long int) ((((/* implicit */int) var_1)) * (((/* implicit */int) var_15))))) >= (min((((/* implicit */long long int) var_17)), (var_9)))))))));
                        var_27 *= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) 7440167787575429383LL)) & (12312964676739234620ULL)));
                        var_28 ^= ((/* implicit */unsigned long long int) ((unsigned short) min((((/* implicit */unsigned char) ((var_5) >= (var_5)))), (var_2))));
                        var_29 &= ((/* implicit */unsigned long long int) var_8);
                    }
                } 
            } 
            var_30 = ((/* implicit */long long int) ((unsigned short) var_0));
        }
        var_31 ^= ((/* implicit */unsigned short) max((max((((/* implicit */unsigned long long int) max((var_2), (((/* implicit */unsigned char) var_10))))), (max((((/* implicit */unsigned long long int) var_5)), (var_16))))), (((/* implicit */unsigned long long int) var_12))));
        /* LoopSeq 4 */
        /* vectorizable */
        for (long long int i_7 = 3; i_7 < 8; i_7 += 4) 
        {
            var_32 |= ((/* implicit */int) ((unsigned long long int) ((unsigned short) var_3)));
            arr_25 [(_Bool)1] &= ((/* implicit */int) ((unsigned int) var_3));
            /* LoopSeq 1 */
            for (int i_8 = 1; i_8 < 8; i_8 += 4) 
            {
                var_33 = ((/* implicit */unsigned int) max((var_33), (((/* implicit */unsigned int) ((((((/* implicit */int) var_0)) % (((/* implicit */int) var_1)))) >= (((/* implicit */int) var_1)))))));
                var_34 = ((/* implicit */unsigned short) ((short) var_6));
                var_35 = ((/* implicit */unsigned char) min((var_35), (((/* implicit */unsigned char) ((((long long int) var_4)) & (((/* implicit */long long int) ((/* implicit */int) ((short) var_15)))))))));
            }
            var_36 = ((/* implicit */unsigned short) max((var_36), (((/* implicit */unsigned short) ((var_9) >= (((/* implicit */long long int) ((/* implicit */int) var_14))))))));
            var_37 *= ((/* implicit */short) ((int) var_16));
        }
        for (unsigned long long int i_9 = 4; i_9 < 8; i_9 += 2) /* same iter space */
        {
            var_38 ^= ((((/* implicit */int) ((max((var_9), (((/* implicit */long long int) var_0)))) <= (((/* implicit */long long int) ((/* implicit */int) var_1)))))) - (((((/* implicit */int) ((unsigned short) 4294967295U))) | (((/* implicit */int) ((_Bool) var_10))))));
            arr_32 [i_1] [i_9 + 1] [i_9] |= ((/* implicit */unsigned char) ((((/* implicit */int) min((max(((short)19559), (((/* implicit */short) (_Bool)0)))), (((/* implicit */short) ((_Bool) var_11)))))) * (((/* implicit */int) max((var_12), (((/* implicit */unsigned char) ((var_11) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))))))));
        }
        for (unsigned long long int i_10 = 4; i_10 < 8; i_10 += 2) /* same iter space */
        {
            var_39 = ((/* implicit */int) min((((/* implicit */long long int) ((int) min((var_7), (((/* implicit */unsigned long long int) var_3)))))), (min((((/* implicit */long long int) ((unsigned int) var_17))), (((((/* implicit */long long int) ((/* implicit */int) var_14))) - (var_8)))))));
            var_40 -= ((/* implicit */long long int) ((((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_7)))) && (((/* implicit */_Bool) min((((/* implicit */long long int) (signed char)-5)), (9223372036854775795LL))))));
            /* LoopNest 3 */
            for (unsigned int i_11 = 2; i_11 < 9; i_11 += 4) 
            {
                for (unsigned char i_12 = 3; i_12 < 9; i_12 += 1) 
                {
                    for (unsigned int i_13 = 0; i_13 < 10; i_13 += 1) 
                    {
                        {
                            var_41 = ((/* implicit */long long int) max((var_41), (((/* implicit */long long int) ((unsigned int) ((short) ((long long int) var_12)))))));
                            var_42 = ((/* implicit */long long int) min((((unsigned int) max((var_11), (((/* implicit */unsigned long long int) var_0))))), (var_13)));
                            var_43 = ((/* implicit */unsigned short) max((var_43), (((/* implicit */unsigned short) min((((((/* implicit */int) ((((/* implicit */int) var_15)) >= (((/* implicit */int) var_10))))) < (((/* implicit */int) max((var_17), (((/* implicit */short) var_2))))))), (((((/* implicit */_Bool) var_12)) && (((var_11) <= (((/* implicit */unsigned long long int) var_8)))))))))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned long long int i_14 = 4; i_14 < 8; i_14 += 2) /* same iter space */
        {
            var_44 = ((/* implicit */unsigned short) max((var_44), (((/* implicit */unsigned short) ((((/* implicit */int) var_10)) == (((/* implicit */int) max((((unsigned short) var_5)), (((/* implicit */unsigned short) max((((/* implicit */unsigned char) var_1)), (var_2))))))))))));
            var_45 -= ((/* implicit */unsigned long long int) ((short) ((unsigned int) ((var_16) << (((var_8) + (7036530503057059203LL)))))));
        }
    }
    var_46 &= ((/* implicit */signed char) ((int) ((signed char) -2485418693139853798LL)));
}
