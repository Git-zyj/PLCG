/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224739
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224739 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224739
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
    var_14 = ((/* implicit */int) max((((((/* implicit */long long int) (+(335622893)))) % (max((var_7), (((/* implicit */long long int) 335622893)))))), (((/* implicit */long long int) (+(((335622893) ^ (335622909))))))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 1; i_0 < 22; i_0 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (long long int i_1 = 2; i_1 < 22; i_1 += 3) 
        {
            for (int i_2 = 1; i_2 < 20; i_2 += 3) 
            {
                {
                    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) min((min((((/* implicit */long long int) (unsigned short)11159)), (-220669694502123890LL))), (((/* implicit */long long int) arr_5 [i_0] [i_1 - 1] [i_2]))))) ? (((/* implicit */long long int) min((((/* implicit */int) (signed char)-95)), (((((/* implicit */_Bool) -335622917)) ? (((/* implicit */int) (unsigned short)11159)) : (((/* implicit */int) var_8))))))) : (((((/* implicit */_Bool) arr_5 [i_0 - 1] [i_1 + 1] [i_2 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)42032))) : (220669694502123891LL)))));
                    arr_7 [i_1] [i_0] [i_1] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -220669694502123918LL)) ? (((((/* implicit */int) (unsigned short)42023)) - (-335622921))) : ((~(335622909)))))) ? (((var_2) >> (((/* implicit */int) (!(((/* implicit */_Bool) 335622917))))))) : (((/* implicit */unsigned int) -335622932))));
                }
            } 
        } 
        arr_8 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) -1369642978)) & (220669694502123873LL)))) ? (min((335622946), (((/* implicit */int) arr_4 [18] [i_0] [i_0] [i_0])))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_5 [i_0] [i_0 - 1] [i_0])) : (((/* implicit */int) (_Bool)1))))))) >= (min((((/* implicit */long long int) var_0)), (arr_6 [i_0 + 1])))));
        arr_9 [i_0] [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)59357))) <= (-220669694502123862LL))))));
        arr_10 [i_0 + 1] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (-(-220669694502123881LL)))) ? (((/* implicit */unsigned long long int) (-(var_4)))) : (max((((/* implicit */unsigned long long int) arr_5 [i_0 + 1] [i_0 - 1] [i_0])), (var_3))))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) max((((/* implicit */unsigned int) var_13)), (3166846845U)))), (((5392309927205813501LL) / (-220669694502123862LL))))))));
    }
    for (unsigned short i_3 = 1; i_3 < 22; i_3 += 3) /* same iter space */
    {
        arr_14 [(unsigned short)13] &= ((/* implicit */unsigned short) max((((/* implicit */int) max((arr_12 [i_3 - 1]), (arr_12 [i_3 - 1])))), (((((/* implicit */int) (unsigned char)210)) << (((-335622891) + (335622900)))))));
        arr_15 [i_3] &= ((/* implicit */signed char) max(((-(((/* implicit */int) (!(((/* implicit */_Bool) 220669694502123873LL))))))), (((((/* implicit */_Bool) 220669694502123896LL)) ? (((/* implicit */int) arr_3 [(_Bool)1])) : ((+(((/* implicit */int) var_12))))))));
        /* LoopNest 3 */
        for (unsigned int i_4 = 2; i_4 < 20; i_4 += 4) 
        {
            for (short i_5 = 0; i_5 < 23; i_5 += 2) 
            {
                for (signed char i_6 = 0; i_6 < 23; i_6 += 4) 
                {
                    {
                        var_16 = ((/* implicit */_Bool) (-(((((/* implicit */int) arr_0 [i_3 + 1])) / (-335622904)))));
                        /* LoopSeq 3 */
                        for (signed char i_7 = 1; i_7 < 22; i_7 += 2) 
                        {
                            var_17 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) 335622890)) | (570848764U))))));
                            var_18 = (!(((/* implicit */_Bool) (-(((((/* implicit */_Bool) -2394095770084057043LL)) ? (220669694502123907LL) : (220669694502123896LL)))))));
                            var_19 += ((/* implicit */long long int) (~(((/* implicit */int) arr_2 [i_3 + 1] [i_4 + 2] [i_4]))));
                        }
                        for (unsigned int i_8 = 0; i_8 < 23; i_8 += 2) 
                        {
                            arr_29 [i_3] [i_5] = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) 220669694502123935LL)) <= (arr_21 [i_3] [i_3] [i_3] [i_3]))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-106))))) : (((((/* implicit */_Bool) arr_21 [i_4] [i_5] [i_6] [i_4])) ? (((/* implicit */unsigned long long int) 3166846845U)) : (arr_21 [i_4] [i_5] [i_6] [i_8])))));
                            var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((-1672545663) & (((/* implicit */int) (signed char)-84))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_25 [i_3] [i_3] [i_3] [(signed char)12] [i_6] [i_8])))))) : (((((/* implicit */_Bool) (signed char)-76)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (220669694502123949LL)))))) ? (((/* implicit */int) (unsigned char)31)) : ((+(((/* implicit */int) var_13)))))))));
                            var_21 = ((/* implicit */signed char) min(((~(((((/* implicit */_Bool) arr_18 [i_4] [i_5] [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)106))) : (3724118531U))))), (((/* implicit */unsigned int) (~(((/* implicit */int) min((arr_24 [i_4] [i_5] [i_6] [i_8]), (((/* implicit */unsigned char) var_8))))))))));
                            var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) var_4))));
                        }
                        for (unsigned char i_9 = 1; i_9 < 20; i_9 += 4) 
                        {
                            arr_33 [i_9] [i_4 - 2] [i_5] [i_4 - 2] [(unsigned short)21] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) -600641018)), (min((((/* implicit */unsigned long long int) -220669694502123946LL)), (8667747354070862960ULL)))))) ? ((-(((/* implicit */int) (short)-21036)))) : (((((/* implicit */_Bool) min((((/* implicit */int) (signed char)89)), (var_11)))) ? ((-(((/* implicit */int) (short)14485)))) : ((-(((/* implicit */int) arr_12 [i_3]))))))));
                            var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) arr_32 [i_3 - 1] [i_6] [(signed char)16] [i_6] [i_9 + 2]))));
                            arr_34 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) -600641018)) ? (((/* implicit */unsigned int) -2124763784)) : (570848756U)));
                        }
                        arr_35 [i_6] [i_4 - 1] [i_5] [i_5] = ((/* implicit */long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (short)2311)) <= (-2124763790))))) == (((((/* implicit */_Bool) -600641018)) ? (((/* implicit */unsigned int) arr_11 [i_3])) : (570848756U))))) ? (((/* implicit */unsigned long long int) min(((~(var_0))), (800348772U)))) : (min((((((/* implicit */_Bool) (signed char)93)) ? (((/* implicit */unsigned long long int) var_10)) : (var_3))), (((/* implicit */unsigned long long int) arr_30 [i_6]))))));
                        arr_36 [i_6] [(_Bool)1] [i_4] [i_4] [i_3] = -2124763784;
                    }
                } 
            } 
        } 
    }
    for (unsigned short i_10 = 1; i_10 < 22; i_10 += 3) /* same iter space */
    {
        arr_40 [i_10] [22LL] = ((/* implicit */short) ((((((/* implicit */_Bool) ((var_10) << (((6168942356961048197ULL) - (6168942356961048172ULL)))))) ? (((((/* implicit */int) (_Bool)0)) >> (((((/* implicit */int) arr_31 [i_10] [i_10 - 1] [i_10] [i_10] [i_10] [i_10] [i_10])) - (28810))))) : (((/* implicit */int) min(((signed char)-110), ((signed char)125)))))) | (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)82)))))));
        var_24 = ((/* implicit */short) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) 12277801716748503419ULL)) ? (((/* implicit */unsigned long long int) 8075974050505306085LL)) : (12277801716748503413ULL)))));
        arr_41 [i_10] = ((/* implicit */unsigned short) ((_Bool) var_13));
        var_25 = ((/* implicit */signed char) max((arr_19 [i_10] [i_10]), (((/* implicit */long long int) (+(arr_16 [i_10 + 1] [i_10 - 1] [i_10 + 1]))))));
    }
}
